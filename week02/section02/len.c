#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("usage: len str\n");
        exit(-1);
    }

    char *str = argv[1];

    int i = 0;
/*
    while (str[i] != '\0') {
        i = i + 1; // or i += 1 or i++
    }
*/
    while (*str != '\0') {
        i++;
        str++; // pointer arithmetic
    }

    printf("%d\n", i);
    return 0;
}
