#include <stdio.h>
#include <string.h>

#define MAX_BYTES 32

char * fill_it_in(char *dest, char *src) {

    // this copies no memory. it assigns ptr values, but even the 
    // ptr values are "pass by value" so not propagated to caller
    // dest = src

    // If dest is a char** then the value of the char* is output
    // *dest = src
    
    // unbounded memory copies are bad!
    // strcpy(dest, src)
    
    strncpy(dest, src, strlen(src));
}

int main(int argc, char *argv[]) {
    char *s = argv[1];

    char buf[strlen(s)];
    fill_it_in(buf, s);

    printf("sizeof(buf) == %ld\n", sizeof(buf));
    
    printf("%s\n", buf);
    
    return 0;
}
