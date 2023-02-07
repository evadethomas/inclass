#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* find the length of the string 
 * given as a command-line argement
 */
int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("usage: len str\n");
        exit(-1);
    }
    
    char *str = argv[1];

    /* method 1: count the number of 
     * characters before the terminating character 
     * treating str as an array of character
     */
    int count = 0;

    while (str[count] != '\0') {
        count = count + 1; // or count += 1 or count++
    }
    printf("Method 1: %d\n", count);
    printf("argv[1]: %s\n", argv[1]);
    printf("str: %s\n", str);

    /* method 2: count the number of 
     * characters before the terminating character 
     * treating str as a pointer to the first character
     */
    count = 0;

    while (*(str+count) != '\0') {
        count++;
    }
    printf("Method 2: %d\n", count);
    printf("argv[1]: %s\n", argv[1]);
    printf("str: %s\n", str);

    /* method 3: count the number of 
     * characters before the terminating character 
     * treating str as a pointer to each character
     */
    count = 0;

    while (*str != '\0') {
        count++;
        str++; // pointer arithmetic
    }

    printf("Method 3: %d\n", count);
    printf("argv[1]: %s\n", argv[1]);
    printf("str: %s\n", str);
    return 0;
}
