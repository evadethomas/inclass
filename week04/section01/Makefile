OBJS = filedemo.o
PROG = filedemo

%.o: %.c 
	gcc -c -g -o $@ $<  

$(PROG): $(OBJS)
	gcc -g -o $@ $^

struct: structdemo.c
	gcc -g -o structdemo structdemo.c

typedef: typedefdemo.c
	gcc -g -o typedefdemo typedefdemo.c

clean:
	rm -rf $(OBJS) $(PROG)
