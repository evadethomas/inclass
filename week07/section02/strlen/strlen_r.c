int strlen_r(char *s) {
    // base case
    if (*s == '\0')
        return 0;

    // recursive case
    // 1+ because we're counting 1 char at a time
    // s+1 because that reduces the string by 1 char
    int len = strlen_r(s + 1);
    
    return 1 + len;
}
