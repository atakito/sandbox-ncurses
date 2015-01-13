all: build

build:
	gcc -o bin/hello-world $1.c -l ncurses

