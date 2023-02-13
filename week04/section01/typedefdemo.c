#include <stdio.h>

typedef struct point {
    float x;
    float y;
} point;

int main(int argc, char* argv[]) {
    point p;
    p.x = 1.0;
    p.y = 0.1;
    printf("%f, %f\n", p.x, p.y);
}
