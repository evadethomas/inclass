#include <stdio.h>
#include <stdlib.h>

struct num_st {
    int i;
    struct num_st *next;
};

void print_list(struct num_st *head) {
    printf("head ptr before print_list: %p\n", &head);

    while (head) {
        printf("i: %d\n", head->i);
        head = head->next;
    }
    printf("\n");
}

int main(int argc, char **argv) {
    struct num_st *head = NULL;
    struct num_st *cur = NULL;

    for (int i = 1; i < argc; i++) {
        // malloc a list node
        struct num_st *pnum = malloc(sizeof(struct num_st));
        if (!pnum) {
            printf("malloc failed\n");
            return -1;
        }

        pnum->i = atoi(argv[i]);  // int val of i-th elem of argv
        pnum->next = NULL;

        if (!head)
            head = pnum;
        else
            cur->next = pnum;
        cur = pnum;

        print_list(head);
        printf("head ptr in main: %p\n", &head);
    }
}
