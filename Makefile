all: build

build:
	gcc -o bin/hello-world hello-world.c -l ncurses

