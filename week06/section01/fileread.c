#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
	FILE* fs = fopen(argv[1], "r");
    if (fs==NULL) {
        printf("%s open error\n", argv[1]);
        exit(-1);
    }

    char buffer[100];
    //memset(buffer,0,sizeof(buffer));
    //1)
    //fread(buffer,  100, 1,  fs);
    //2)
    memset(buffer,0,sizeof(buffer));
    fgets(buffer, 100,  fs);
    printf("%s", buffer);
      
}