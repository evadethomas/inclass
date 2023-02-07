#include <stdio.h>
#include <string.h>

int main(int argc, char* argv[]) {

	/* in-class exercise */ 
	/* for a given string, replace o with 0 and print */

	char* str = argv[1];

	for(int i = 0; i < strlen(str); i++){
		switch(str[i]){
			case 'o': str[i] = '0'; break;
		}
		printf("%c\n", str[i]);
	}

	/*switch (argv[1][0]) {
	case 'a': printf ("left\n"); break;
	case 's': printf("down\n"); break;
	case 'd' : printf("right\n"); break;
	case 'w' : printf("up\n"); break;
	default: printf("quit\n"); break;
	}
	return 0;*/

}