#include <stdio.h>
#include <stdlib.h>

struct node {
    int val;
    struct node *next;
};

void print_list(struct node *head) {
    struct node *pf = head;
    printf("[");
    while (pf!=NULL && pf->next!=NULL) {
        printf("%d, ", pf->val);
        pf = pf->next;
    }
    printf("%d]\n", pf->val);
}

int main(int argc, char *argv[]) {
    struct node *head = NULL;
    
    for (int i = 1; i < argc; i++) {
        int val = atoi(argv[i]);

        struct node *pf = malloc(sizeof(struct node));
        if (!pf) {
            printf("malloc failed\n");
            exit(-1);
        }
        pf->val = val;
        pf->next = NULL;

        // if no head, pf is first item
        if (!head)
            head = pf;
        else {
            struct node *walk = head;
            while (walk->next != NULL) {
                walk = walk->next;
            }
            walk->next = pf;
        }

    }
    print_list(head);
    // TODO complete print_list function
}