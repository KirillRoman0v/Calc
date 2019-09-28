GCC = gcc
FLAGS = -o
CFLAGS = -c -Wall
OBJECTS = (SOURCES:.c=.o)
SOURCES = main.c menu.c queue_stack.c str_analyze.c string.c suf_trans.c
.PHONY: all
all: calc 

calc: 
	$(GCC) $(OBJECTS) $(FLAGS) $@

main.o: main.c
	$(GCC) $(CFLAGS) main.c

queue_stack.o: queue_stack.c
	$(GCC) $(CFLAGS) queue_stack.c

menu.o: menu.c
	$(GCC) $(CFLAGS) menu.c

str_analyze.o: str_analyze.c
	$(GCC) $(CFLAGS) str_analyze.c

string.o: string.c
	$(GCC) $(CFLAGS) string.c

suf_trans.o: suf_trans.c
	$(GCC) $(CFLAGS) suf_trans.c

.PHONY: clean
clean:
	rm -rf *.o calc