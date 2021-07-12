all: pie no-pie static

pie:
	gcc -fPIE -pie -o pie example.c
no-pie:
	gcc -no-pie -o no_pie example.c
static: 
	gcc -static -o static example.c

clean:
	rm -f pie
	rm -f no_pie
	rm -f static
