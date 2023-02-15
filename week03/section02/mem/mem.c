#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int i = 0; // local vars on stack
    printf("address of i: %p\n", &i);
    
    char *p = "foobar"; // global data
    printf("value of p: %p\n", p);

    char *p2 = malloc(3); // dynamic alloc on heap
    if (p2) {
        strncpy(p2, "foobar", 3);
        printf("value of p2: %p\n", p2);
    }
    
    return 0;
}
