#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {

    char buf[32];
    
    snprintf(buf, sizeof(buf), "%s %d", argv[1], 7);

    printf("%s\n", buf);

    if (!strcmp(argv[1], "foobar")) {
        printf("equal\n");
    } else {
        printf("not equal\n");
    }
    return 0;
}
