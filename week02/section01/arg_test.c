#include <stdio.h> 
#include <string.h>

// @EJ 2023-01-31
// prints the arguments one char at a time

int main(int argc, char** argv) {

	/* method 1: treating char** as an array of strings
	 * and treating char* as an array of characters
	 */

	for (int i=0; i<argc; i++) {
		char* str = argv[i];
		for (int j=0; j<strlen(str); j++) {
			printf("%c\n", str[j]);
		}
		printf("\n");
	}
	printf("\n");

	//method 2: using pointer arithmetic 

	for (int i=0; i<argc; i++) {
		for (int j=0; j<strlen(argv[i]); j++) {
			printf("%c\n", *(*(argv+i) + j));
		}
		printf("\n");
	}

	return 0;
}