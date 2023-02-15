#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *path = argv[1];
    char *str = argv[2];

    FILE *fp = fopen(path, "a");
    if (fp != NULL) {
        int len = strlen(str);
        int nwritten = fwrite(str, sizeof(char), len, fp);
        if (nwritten != len) {
            printf("fwrite failed\n");
        }
        fclose(fp);
    } else {
        printf("fopen failed\n");
    }
}
