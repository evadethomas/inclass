#include <stdio.h>
#include <string.h>

#define LEN 64

struct test_st {
    char s1[LEN + 1];
    char s2[LEN + 1];
};

int main(int argc, char *argv[]) {
    char *s1 = argv[1];
    char *s2 = argv[2];
    char *s3 = argv[3];
    char *s4 = argv[4];

    // allocate space on the stack for a struct test_st
    struct test_st t[2];

    // initialize all the data in t to 0
    // 0 === '\0' === NULL
    memset(&t, 0, sizeof(t));

    // copy data from s1 into t.s1
    strncpy(t[0].s1, s1, LEN);
    strncpy(t[0].s2, s2, LEN);
    strncpy(t[1].s1, s3, LEN);
    strncpy(t[1].s2, s4, LEN);

    FILE *fp = fopen("test.txt", "w");
    if (!fp) {
        printf("fopen failed\n");
        return -1;
    }

    size_t nwritten = fwrite(&t, sizeof(struct test_st), 2, fp);
    if (nwritten != 2) {
        printf("fwrite failed\n");
        return -1;
    }
    
    fclose(fp);

    fp = fopen("test.txt", "r");
    if (!fp) {
        printf("failed to fopen for read\n");
        return -1;
    }

    memset(&t, 0, sizeof(t));
    size_t nread = fread(&t, sizeof(struct test_st), 2, fp);
    if (nread != 2) {
        printf("failed to fread\n");
        return -1;
    }

    for (int i = 0; i < 2; i++) {
        printf("t[%d].s1 = %s\n", i, t[i].s1);
        printf("t[%d].s2 = %s\n", i, t[i].s2);
    }

    fclose(fp);

    return 0;
}
