# CS 221-01 Week07 

## 2023-03-07

### Logistics

Project02 score posted. Resubmission for autograded part is due on 2023-03-14. No late days accepted. See the comments in Canvas for Defensive Coding and Style. 
	
#### Common mistakes
- not checking malloc error. [print stack](https://github.com/cs221-s23/inclass/blob/main/week07/section01/malloctest.c) or do below.
```c
struct entry* node = malloc(sizeof(struct entry));
if (node==NULL) {
	printf("malloc failed");
	exit(-1);
}
```
- unbounded memory copy
```c
strcpy(dst, src);

strncpy(dst, src, sizeof(src));

strncpy(dst, src, sizeof(dst));

strncpy(dst, src, strlen(src));
```

- not `free`ing memory from `malloc`
```c
struct entry* head = malloc(sizeof(struct entry)); //1)
struct entry* node = malloc(sizeof(struct entry)); //2)
head = node;
free(head);
//this frees the memory space from 2), not 1)
``` 

- inefficient use of stack 
```c
for (int i=0; i<10000; i++) {
	char pwd[MAX_PASSWORD];
	char leet[MAX_PASSWORD+1];
	char plus1[MAX_PASSWORD];

	//do something with char arrays
}
```
vs.
```c
char pwd[MAX_PASSWORD+1];
	for (int i=0; i<10000; i++) {
	//do something with char array
}
```

- well designed functions: test-driven development

#### Midterm on 3/23

Midterm is in class for the whole class duration. We will have practice questions after covering recursion and minimax.

#### Assignments
[Project03](https://cs221.cs.usfca.edu/assignments/project03.html) is due on 2023-03-28. You may use up to 2 late days. (No submissions are accepted after midnight 2023-03-30.)

1 project is worth *10% of the grade*.

[Lab04](https://cs221.cs.usfca.edu/assignments/lab04.html) was due on 2023-03-07. You may use up to 2 late days. (No submissions are accepted after midnight  2023-03-09.)

1 lab is worth *1.25% of the grade*.

Make sure to create a [Makefile](https://cs221.cs.usfca.edu/slides/make.html#/), and test the Makefile before submission. Your Makefile should compile and link to create an executable.

```sh
make clean
make
```

### Topics
- [test files](https://github.com/cs221-s23/lab04-given/blob/main/test.c): partial credits available starting lab04

- recursion
