PA3:
	gcc -Wall gray.c flipHoriz.c mainDriver.c mirror.c parse.c transform.h printMenu.c print.c

run:
	./a.out tiger.ppm

test:
	@./a.out tiger.ppm > test.ppm
