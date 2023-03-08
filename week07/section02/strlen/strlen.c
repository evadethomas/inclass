#include <stdio.h>

int strlen_i(char *);
int strlen_r(char *);

int main(int argc, char **argv) {
    char *str = argv[1];
    int len_i = strlen_i(str);
    printf("iterative: %d\n", len_i);

    int len_r = strlen_r(str);
    printf("recursive: %d\n", len_r);

    return 0;
}
