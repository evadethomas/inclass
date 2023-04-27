#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <sys/ioctl.h>
#include <unistd.h>

int main (int argc, char* argv[]) {
    char *port = "8888";

    if (strncmp(argv[1], "-p", 2)==0) {
        port = argv[2];
    }

    struct addrinfo hints;
    memset(&hints, 0, sizeof(hints));
    hints.ai_family = AF_INET;
    hints.ai_socktype = SOCK_STREAM;
    hints.ai_flags = AI_PASSIVE;
    hints.ai_protocol = IPPROTO_TCP;

    struct addrinfo *results;
    int rc = getaddrinfo(NULL, port, &hints, &results);
    if (rc != 0) {
        perror("getaddrinfo failed");
    }

    int fd;
    struct addrinfo *r;
    for (r = results; r != NULL; r = r->ai_next) {
        fd = socket(r->ai_family, r->ai_socktype, r->ai_protocol);
        if (fd == -1)
            continue;  // failed; try next addrinfo

        int en = 1;
        if (setsockopt(fd, SOL_SOCKET, SO_REUSEADDR, &en, sizeof(int)) == -1) {
            perror("setsockopt reuseaddr");
            exit(0);
        }

        if (ioctl(fd, FIONBIO, (char*) &en) == -1) {
            perror("ioctl");
            exit(0);
        }

        if (bind(fd, r->ai_addr, r->ai_addrlen) == 0) {
            break;  // success
        }
        else {
            perror("bind");
            exit(0);
        }

        close(fd);  // failed; try next addrinfo
        fd = -1;
    }

    if (listen(fd, SOMAXCONN) == -1) {
        perror("listen");
    }

    int new_fd = accept(fd, NULL, NULL);
    if (new_fd == -1) {
        perror("accept fail");
    }

    char *ping = "PING";
    char *pong = "PONG\n";
    char *invalid = "INVALID\n";
    
    char buf[32] = {0,};
    int nread = recv(new_fd, buf, 4, 0);
    if (nread == 4 && !strncmp(buf, ping, strlen(ping))) {
        write(new_fd, pong, strlen(pong));
    }
    else {
        write(new_fd, invalid, strlen(invalid));
    }

    close(new_fd);
    close(fd);
    freeaddrinfo(results);
}
