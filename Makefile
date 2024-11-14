# the compiler
CC = gcc

src= main.o variable_names.o constants.o datatypes_and_sizes.o file_copying.o
target=c_demo

$(target): $(src)
	$(CC) $^ -o $(target)

%.o: %.c
	$(CC) -c $< -o $@

.PHONY: clean
clean: 
	rm -rf *.o c_demo
