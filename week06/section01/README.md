# CS 221-01 Week06 

## 2023-02-28

### Logistics

How to get help? [CampusWire](https://campuswire.com/c/G72F8E8DD/feed/97)

[Project02](https://cs221.cs.usfca.edu/assignments/project02.html) is due on 2023-02-28. You may use up to 2 late days. (No submissions are accepted after midnight 2023-03-02.)

1 project is worth *10% of the grade*.

[Lab04](https://cs221.cs.usfca.edu/assignments/lab04.html) was due on 2023-03-07. You may use up to 2 late days. (No submissions are accepted after midnight  2023-03-09.)

1 lab is worth *1.25% of the grade*.

Make sure to create a [Makefile](https://cs221.cs.usfca.edu/slides/make.html#/), and test the Makefile before submission.

```sh
make clean
make
```

### Topics
- `fscanf` for project02

	- `fgets` 
		- gets chars til '\n' or EOF but includes the '\n'
		- can
`fread` reads as many bytes as you specify
`fscanf` can use "%ms" to `malloc` and read at the same time

- `fprintf` for project02

- [Makefile](https://cs221.cs.usfca.edu/slides/make.html#/) revisted: compiling, linking, running
- [test files](https://github.com/cs221-s23/lab04-given/blob/main/test.c): partial credits available starting lab04
