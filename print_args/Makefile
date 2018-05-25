HEADERS = 

default: print_args

print_args.o: print_args.c $(HEADERS)
    gcc -c print_args.c -o print_args.o

print_args: print_args.o
    gcc print_args.o -o print_args

clean:
    -rm -f print_args.o
    -rm -f print_args