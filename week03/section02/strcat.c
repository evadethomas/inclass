#include <stdio.h>
#include <string.h>

void add_string(char *dest, char *src, int len) {
    // strcat does "catenation" of strings
    strncat(dest, src, len);
}

int main(int argc, char *argv[]) {
    int len = strlen(argv[1]) + 4;
    char buf[len];
    strncpy(buf, argv[1], len);

    add_string(buf, "bar", strlen("bar") + 1);

    printf("buf: %s\n", buf);
}
