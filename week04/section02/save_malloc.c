#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define LEN 64
#define NUM_ELEMS 2

struct test_st {
    char s1[LEN + 1];
    char s2[LEN + 1];
};

struct test_st *alloc_dict(int n) {
    return malloc(sizeof(struct test_st) * n);
}

int main(int argc, char *argv[]) {
    char *s1 = argv[1];
    char *s2 = argv[2];
    char *s3 = argv[3];
    char *s4 = argv[4];
    
    // allocate space on the heap for a struct test_st
    struct test_st *pt = alloc_dict(NUM_ELEMS);

    // initialize all the data in t to 0
    // 0 === '\0' === NULL
    memset(pt, 0, sizeof(struct test_st) * NUM_ELEMS);

    // copy data from s1 into t.s1
    strncpy(pt[0].s1, s1, LEN);
    strncpy(pt[0].s2, s2, LEN);
    strncpy(pt[1].s1, s3, LEN);
    strncpy(pt[1].s2, s4, LEN);

    FILE *fp = fopen("test.txt", "w");
    if (!fp) {
        printf("fopen failed\n");
        return -1;
    }

    size_t nwritten = fwrite(pt, sizeof(struct test_st), NUM_ELEMS, fp);
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

    memset(pt, 0, sizeof(struct test_st) * NUM_ELEMS);
    size_t nread = fread(pt, sizeof(struct test_st), NUM_ELEMS, fp);
    if (nread != NUM_ELEMS) {
        printf("failed to fread\n");
        return -1;
    }

    for (int i = 0; i < NUM_ELEMS; i++) {
        printf("t[%d].s1 = %s\n", i, pt[i].s1);
        printf("t[%d].s2 = %s\n", i, pt[i].s2);
    }

    fclose(fp);

    free(pt); // free what we allocated on the heap

    return 0;
}
