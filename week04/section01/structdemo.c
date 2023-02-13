#include <stdio.h>

struct point {
    float x;
    float y;
};

int main(int argc, char* argv[]) {
    struct point p;
    p.x = 1.0;
    p.y = 0.1;
    printf("%f, %f\n", p.x, p.y);
}
