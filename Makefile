all: build

build:
	gcc -lncurses -o hello-world hello-world.c
	gcc -lncurses -o example example.c

