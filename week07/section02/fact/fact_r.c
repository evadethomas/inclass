int fact_r(int n) {
    // base case
    if (n <= 1)
        return 1;

    // recursive case
    // n -1 reduces the data set for the recursion
    int f = fact_r(n - 1);

    return n * f;
}
