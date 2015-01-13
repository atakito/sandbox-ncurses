# ncurses sandbox
Just playing aroung with ncurses.


http://tldp.org/HOWTO/NCURSES-Programming-HOWTO/printw.html

If you don't have the header files (ubuntu):
```bash
sudo apt-get install libncurses5-dev
```

Build with:
```bash
gcc -o bin/executable-file source-file.c -l ncurses
```

Makefile
```bash
$ make fn=hello-world
```

This run:
```bash
gcc -l bin/hello-world hello-world.c -l ncurses
```

