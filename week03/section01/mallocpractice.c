#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//./a.out abc defg hi
// create 2-dimensional array of char 
// = array of strings using malloc
// char* strings[argc-1]; (type of strings is char**)
// string[0] = malloc(******);
// abc
// defg
// hi
// free memories before returning 0 in the end

/* find the length of the string 
 * given as a command-line argement
 */

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("invalid arguments");
        exit(-1);
    }
    char* strings[argc-1] = null
    for (i=1; i<argc; i++) {
        strings[i-1] = malloc(strlen(argv[i]));
    }
    for (i=0; i<argc-1; i++) {
        //print the size of strings[i]
    }
    for (i=0; i<argc-1; i++) {
        //free strings[i]
    }
}