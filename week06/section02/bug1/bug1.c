#include <stdio.h>

#if 0

void bug(char **p) {
    // p's value will be changed for caller
    *p = "callee";
}

int main(int argc, char *argv[]) {
    char *p = "caller";
    bug(&p);
    printf("%s\n", p);

    return 0;
}

#else

void bug(char *p) {
    // p's value will not be changed for caller
    p = "callee";
}

int main(int argc, char *argv[]) {
    char *p = "caller";
    bug(p);
    printf("%s\n", p);

    return 0;
}

#endif
