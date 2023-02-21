#include <stdio.h>
#include <string.h>

void printarray(char* list[], int length) {

	printf("[");
	for (int i = 0; i < length-1; i++) {
		printf("%s, ",list[i]);
	}
	printf("%s]\n", list[length-1]);
}

void insertionSort(char* a[], int length) { 

    for (int index = 1; index < length; index++) {
        char* key = a[index];
	    int position = index;

        while (position > 0 && strcmp(key,a[position-1]) < 0) {
            a[position] = a[position-1];
            position--;
        }
            
        a[position] = key;
    }
}

int main(int argc, char* argv[]) {
	char* names[] = {"Etta", "Carol", "Daphne"};
	printarray(names, 3);
	insertionSort(names, 3);
	printarray(names, 3);	
}
