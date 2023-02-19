char *alloc(int n) {
    return malloc(n);
}

int main() {
    char *p = alloc(2);
    foo(p);
    free(p);
}
