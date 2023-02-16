#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char* argv[]) {
	char ch = 'c'; 
	char* ch_ptr = &ch; //the address of variable ch is in ch_ptr
	printf("%c %c\n", ch, *ch_ptr);
	printf("%p %p\n", &ch, ch_ptr);

	char* str = "Good morning";
	char* str_ptr = str; //shallow copy
	printf("before malloc\n");
	printf("%p %p\n", str, str_ptr);
	printf("%s %s\n", str, str_ptr);
	str_ptr = malloc(strlen(str)*sizeof(char));
	memset(str_ptr, 0, strlen(str_ptr));
	strncpy(str_ptr, str, strlen(str)); //deep copy
	printf("after malloc\n");
	printf("%p %p\n", str, str_ptr);
	printf("%s %s\n", str, str_ptr);
}