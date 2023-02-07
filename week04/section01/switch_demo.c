#include <stdio.h>

int main(int argc, char* argv[]) {
	switch (argv[1][0]) {
	case 'a': printf ("left\n"); break;
	case 's': printf("down\n"); break;
	case 'd' : printf("right\n"); break;
	case 'w' : printf("up\n"); break;
	default: printf("quit\n"); break;
	}
	return 0;

	/* in-class exercise */ 
	/* for a given string, replace o with 0 and print */
	//inside the loop print one char at a time
	printf("%c")
	// after the loop change the line
	printf("\n");
}