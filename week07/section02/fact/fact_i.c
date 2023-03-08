int fact_i(int n) {
    int retval = 1;
    while (n > 1) {
        retval *= n;
        n--;
    }
    return retval;
}
