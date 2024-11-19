all: xwin89 fileio

xwin89: xwin89.c
	gcc xwin89.c -Wall -lX11 -oxwin89

fileio.cpp:
	g++ fileio.cpp -Wall -ofileio

clean:
	rm -f xwin89 fileio output

