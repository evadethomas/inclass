#include <stdio.h>

struct point {
    float x;
    float y;
};

void y_flip(struct point p) {
    p.y = -p.y;
}

void ptr_y_flip(struct point *p) {
    p->y = -p->y;
}

int main(int argc, char* argv[]) {
    struct point p;
    p.x = 1.0;
    p.y = 0.1;
    printf("before flip: %.1f, %.1f\n", p.x, p.y);
    y_flip(p);
    printf("after pass-by-value: %.1f, %.1f\n", p.x, p.y);
    ptr_y_flip(&p);
    printf("after pass-by-reference  flip: %.1f, %.1f\n", p.x, p.y);
}

