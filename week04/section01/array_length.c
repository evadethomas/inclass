#include <stdio.h> 

int main(int argc, char* argv[]) {
	int sample[] = {1,5,2,7,78};
	printf("%lu\n", sizeof(sample)/sizeof(int));


	printf("size of char = %lu\n", sizeof(char));
	printf("size of short = %lu\n", sizeof(int));
	printf("size of int = %lu\n", sizeof(int));
	printf("size of float = %lu\n", sizeof(float));
	printf("size of double = %lu\n", sizeof(double));
	printf("size of long = %lu\n", sizeof(long));
	printf("\n");

	printf("size of char* = %lu\n", sizeof(char*));
	printf("size of int* = %lu\n", sizeof(int*));

	/* in-class exercise */
	char* passwords[] = {"1234","passwords"};

	/* print the length of passwords */

	return 0;
}
