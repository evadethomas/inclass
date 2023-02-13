#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct student {
    char name[20];
    char phone[11];
} student;

int main(int argc, char* argv[]) {
    if (argc < 2) {
        printf("Usage: filedemo [filename]\n");
        exit(-1);
    }
    FILE* fs = fopen(argv[1], "w");
    if (fs==NULL) {
        printf("%s open error\n", argv[1]);
        exit(-1);
    }
      
    student temp;
    for (int i=0; i<10; i++) {
        sprintf(temp.name, "alice%d",i);
        sprintf(temp.phone, "123456789%d",i);
        printf("%s, %s\n", temp.name, temp.phone);
        fwrite(&temp, sizeof(student), 1, fs);
    }
    fclose(fs);
    fs = fopen(argv[1], "r");
    if (fs == NULL) {
        printf("%s open error\n", argv[1]);
        exit(-1);
    }
    student buf;
    int rs = 1;
    while (rs) {
        rs = fread(&buf, sizeof(student), 1, fs);
        printf("%s, %s\n", buf.name, buf.phone);
    }
    fclose(fs);
}
