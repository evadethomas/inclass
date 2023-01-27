#include <stdio.h>

int main(int argc, char** argv) {
	int x[] ={1,3,2};
	char y[] = {'h', 'i'};
	char* z = "hello";

	// print addresses of x, y, z
	printf("%p\n",x);
	printf("%p\n",y);
	printf("%p\n",z);
	
	// print the contents of x, y, z
	printf("[%d, %d, %d]\n", x[0], x[1], x[2]);
	printf("%c%c\n", y[0],y[1]);
	printf("%s\n", z);
	
	// funky stuff - guess what will be printed
	printf("[%d, %d, %d]\n", *x, *(x+1), *(x+2));
	printf("%d\n", *(x+4));
	printf("%c%c\n", *y,*(y+1));
	printf("%s\n", y);
	printf("%d%d\n", *y,*(y+1));
	printf("%c\n", *z);
	printf("%d\n", *(z+1));

	return(0);
}