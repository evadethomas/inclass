# CS 221-01 Week04 

## 2023-02-14

### Logistics

[Project01](https://cs221.cs.usfca.edu/assignments/project01.html) is due on 2023-02-14. You may use up to 2 late days. (No submissions are accepted after midnight 2023-02-16.)

1 project is worth *10% of the grade*.

[Lab03](https://cs221.cs.usfca.edu/assignments/lab03.html) is due on 2023-02-21. You may use up to 2 late days. (No submissions are accepted after midnight  2023-02-23.)

Make sure to create a Makefile, and test the Makefile before submission.

```sh
make clean
make
```


### Topics
- how to use [struct](https://github.com/cs221-s23/inclass/blob/main/week04/section01/structdemo.c) and [typedef struct](https://github.com/cs221-s23/inclass/blob/main/week04/section01/typedefdemo.c) in C ([slides](https://cs221.cs.usfca.edu/slides/struct.html#/))
- how to [open/close/read/write a file](https://github.com/cs221-s23/inclass/blob/main/week04/section01/filedemo.c) ([slides](https://cs221.cs.usfca.edu/slides/fileio.html#/))

## 2023-02-16

### Common string errors
- `char* password = "Pa$$word!";` is immutable
- 'password[0] = 'p';` would give "Bus error"
- `char* password = argv[1]` is mutable
- `char password[10]` is mutable and can contain up to 9 chars 

### getting a mutable string
```c
char* pwd = "password";
//1) declaration
char* buf;
//2) allocation
buf = malloc((sizeof(pwd)+1)*sizeof(char));
//3) initialization
memset(buf, 0, sizeof(buf));
//4) copy
strncpy(buf, pwd, sizeof(pwd));
```
- [example code](https://github.com/cs221-s23/inclass/blob/main/week04/section01/ptrdemo.c)
### pass by value vs. pass by reference
- in Java, primitive types are pass by value and reference types are pass by reference
- in C, scalar type arguments are pass by value and pointer type argumentss are pass by reference
- `int main(int argc, char* argv[])` -> `argc` is pass by value, `argv` is pass by reference
- [example code](https://github.com/cs221-s23/inclass/blob/main/week04/section01/structpassing.c)

### scope error
- `char* leetify(char* password)` -> `void leetify(char* dest, char* password)` 
- local static memory allocation (e.g. `char leet[MAX_PASSWORD]`) is destroyed once the function finishes, as the stack frame disappears.
- local dynamic memory allocation (e.g. `char* leet = malloc(MAX_PASSWORD*sizeof(char))`) survives when the function finishes, as they are in heap.
- Java can return String created within a method, since all objects are in heap.

### efficiency of code
- how many operations? 
- how many times of file I/O?
- [example code](https://github.com/cs221-s23/inclass/blob/main/week04/section01/efficiencydemo.c)
