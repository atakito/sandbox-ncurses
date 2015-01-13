all: build

build:
	gcc -o bin/$(fn) $(fn).c -l ncurses

