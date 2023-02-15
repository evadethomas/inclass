#include <stdio.h>

struct foo {
    int i;
    int j;
};

void do_foo(struct foo *pf) {
    if (pf->i == 2) 
        printf("yep!\n");

    // dereference pf and mutate values
    pf->i = 0;
    pf->j = 1;

    // also dereferences pf
    (*pf).i = 9;    
}

int main(int argc, char *argv[]) {
    struct foo f;

    f.i = 2;
    f.j = 3;

    // pass a reference to the local f variable
    // which has type "struct foo"
    do_foo(&f);

    // print out mutated values since we passed by reference
    printf("f.i: %d\n", f.i);
    printf("f.j: %d\n", f.j);
}
