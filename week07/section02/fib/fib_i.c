int fib_i(int n) {
    int retval = 1;
    int x = 0;
    int y = 0;
    for (int i = 1; i < n; i++) {
        x = y;
        y = retval;
        retval = x + y;
    }
    return retval;
}
