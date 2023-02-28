#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
    FILE* fs = fopen(argv[1], "w");
    if (fs==NULL) {
        printf("%s open error\n", argv[1]);
        exit(-1);
    }

    char buffer[100];
    memset(buffer,0,sizeof(buffer));
    char* pwd = "password";
    sprintf(buffer, "%s", pwd);
    //1)
    //fwrite(buffer, 100, 1,  fs);
    //2)
    fprintf(fs, "%s", pwd);
}
