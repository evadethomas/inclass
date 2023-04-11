#include <stdio.h>

int main(int argc, char* argv[]) {

    int a = 11, b = 8; // a = 0b1011, b = 0b1000;
    printf("%d\n", a^b); // a^b = 0b0011 = 3;
    b = 3; // a = 0b1011, b = 0b0011;
    printf("%d\n", a^b); // a^b = 0b1000 
}
