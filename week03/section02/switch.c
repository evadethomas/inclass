#include <stdio.h>


int main(int argc, char *argv[]) {
    char *s = argv[1];

    while (*s) {
        switch (*s) {
            case 'x':
                printf("got an x!\n");
                break;
            default:
                printf("not an x\n");
        }
        s++;
    }
    return 0;
}
