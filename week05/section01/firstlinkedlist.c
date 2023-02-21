#include <stdio.h>
#include <stdlib.h>

struct node {
	int value;
	struct node* next;
};

int main (int argc, char* argv[]) {
	struct node *n3;
	n3.value = 3;
	n3.next = NULL;

	printf("%p, %d, %p\n", &n3, n3.value, n3.next);

	struct node *n2;
	n2.value = 9;
	n2.next = &n3;

	printf("%p, %d, %p\n", &n2, n2.value, n2.next);
	printf("%p, %d, %p\n", n2.next, n2.next->value, 
			n2.next->next);
	printf("%p, %d, %p\n", &n3, n3.value, n3.next);

	struct node *n1;
	n1.value = 7;
	n1.next = &n2;

	printf("%p, %d, %p\n", &n1, n1.value, n1.next);
	printf("%p, %d, %p\n", n1.next, n1.next->value, 
			n1.next->next);
	printf("%p, %d, %p\n", &n3, n3.value, n3.next);


}