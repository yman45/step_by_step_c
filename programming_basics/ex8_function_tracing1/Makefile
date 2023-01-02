prog := function_tracing1
all:
	cc -Wall -Wpedantic -o $(prog) $(prog).c
diff:
	colordiff --unified --ignore-trailing-space answer.txt <(./$(prog))
clean:
	rm --force $(prog)
