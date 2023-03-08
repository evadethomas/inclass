#include <stdio.h>
#include <stdlib.h>

int fact_i(int n);
int fact_r(int n);

int main(int argc, char *argv[]) {
    int n = atoi(argv[1]);

    int f_i = fact_i(n);
    printf("iterative: %d\n", f_i);

    int f_r = fact_r(n);
    printf("recursive: %d\n", f_r);

    return 0;
}
