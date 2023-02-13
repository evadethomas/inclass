OBJS = filedemo.o
PROG = filedemo

%.o: %.c 
	gcc -c -g -o $@ $<  

$(PROG): $(OBJS)
	gcc -g -o $@ $^

clean:
	rm -rf $(OBJS) $(PROG)
