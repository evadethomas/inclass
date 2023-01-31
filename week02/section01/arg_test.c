#include <stdio.h> 
#include <string.h>

int main(int argc, char** argv) {
	//printf("%d\n", argc);
	for (int i=0; i<argc; i++) {
		char* str = argv[i];
		for (int j=0; j<strlen(str); j++) {
			printf("%c\n", *(*(argv+i) + j));
		}
	}
}