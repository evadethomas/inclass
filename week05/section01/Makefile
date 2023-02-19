OBJS = linked.o  
PROG = linked  

%.o: %.c 
	gcc -c -g -o $@ $<  

$(PROG): $(OBJS)
	gcc -g -o $@ $^

clean:
	rm -rf $(OBJS) $(PROG)
