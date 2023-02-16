#include <stdio.h>
#include <stdbool.h>

int sum(int n) {
    return n*(n+1)/2;
}
int main(int argc, char* argv[]) {
    for (int i = 0; i < 100; i++) {
        if (sum(i)=55) {
            printf("sum = %d\n", sum(i));
        }
    }
}

//1) equality vs. comparison
//2) repeated function call
//3) early stop of loop
//4) function declaration