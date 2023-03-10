#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int i;
    for (i = 0; i < argc; i++) {
        if (!strcmp(argv[i], "-s")) {
            printf("size: %d", atoi(argv[i + 1]));
            i++;
            break;
        }
    }

    for (int j = i; j < argc; j++) {
        printf("board pos: %s\n", argv[j]);
    }
    
    return 0;
}
