#include <stdio.h>
#define LEN 7

int main() {
    int y[LEN] = {5, 6, 6, 8, 1, 2, 4};
    int i;

    for (i = 0; i < LEN; i++) {
        if (y[i] % 2 == 0) {
            y[i] = y[i] / 2;
        }
    }

    for (i = 0; i < LEN; i++) {
        printf("%d\n", y[i]);
    }

    return 0;
}
