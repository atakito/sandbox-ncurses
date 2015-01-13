# ncurses sandbox
Just playing aroung with ncurses.


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

## Useful Links
- http://askubuntu.com/questions/270381/how-do-i-install-ncurses-header-files
- http://tldp.org/HOWTO/NCURSES-Programming-HOWTO/printw.html
