#include <stdio.h>

int main() {
    int num1 = 2;
    int num2 = 10;
    if (num1 < num2) {
        printf("red\n");
    }
    if ((num1 + 5) < num2) {
        printf("white\n");
    } else {
        printf("blue\n");
    }
    printf("yellow\n");

    return 0;
}
