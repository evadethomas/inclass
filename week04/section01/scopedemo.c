#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* leetify_array(char* pwd) {
	char leet[strlen(pwd)+1]; //declaration and allocation
	memset(leet, 0, strlen(leet)); // initialization
	strncpy(leet, pwd, strlen(pwd)+1); // copy

	for (int i = 0; i < strlen(leet); i++) {
		if (leet[i]=='s') {
			leet[i] = '$';
		}
	}
	printf("in leetify_array: %s %s\n", pwd, leet);
	return leet;
}

char* leetify_malloc(char* pwd) {
	char* leet; //declaration
	leet = (char*) malloc(strlen(pwd)+1); //allocation
	memset(leet, 0, strlen(leet)); // initialization
	strncpy(leet, pwd, strlen(pwd)); // copy
	for (int i = 0; i < strlen(leet); i++) {
		if (leet[i]=='s') {
			leet[i] = '$';
		}
	}
	printf("in leetify_malloc: %s %s\n", pwd, leet);
	return leet;
}

int main(int argc, char* argv[]) {
	char* password = "password";
	char* leeted_array = leetify_array(password);
	leetify_array("12345678");
	printf("back in main: %s %s\n", password, leeted_array);
	char* leeted_malloc = leetify_malloc(password);
	printf("back in main: %s %s\n", password, leeted_malloc);

}