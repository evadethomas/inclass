#include <stdio.h>
#include <stdlib.h>

struct item {
    int i;
    struct item *next;
};

struct item *insert(struct item *head, struct item *new) {
    if (!head)
        return new;

    struct item *walk = head;
    while (walk) {
        if (NULL == walk->next) {
            walk->next = new;
            break;
        }
        else
            walk = walk->next;
    }
    return head;
}

void print_list(struct item *head) {
    ;
}

int main(int argc, char *argv[]) {
    struct item *head = NULL;

    for (int i = 1; i < argc; i++) {
        int j = atoi(argv[i]);
        struct item *new = malloc(sizeof(struct item));
        new->i = j;
        head = insert(head, new);
    }

    print_list(head);
    return 0;
}
