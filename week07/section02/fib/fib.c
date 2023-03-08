#include <stdio.h>
#include <stdlib.h>

int fib_i(int);
int fib_r(int);

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);

    int f_i = fib_i(n);
    printf("iterative: %d\n", f_i);

    int f_r = fib_r(n);
    printf("recursive: %d\n", f_r);

    return 0;
}
