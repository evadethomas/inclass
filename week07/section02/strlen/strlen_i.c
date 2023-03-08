int strlen_i(char *s) {
    int count = 0;
    while (*s != '\0') {
        s++;
        count++;
    }
    return count;
}
