PA3:
	gcc -Wall gray.c flipHoriz.c mainDriver.c mirror.c parse.c transform.h printMenu.c print.c

run:
	./a.out tiger.ppm

test:
	@./a.out tiger.ppm > test.ppm
	./a.out mcfaddin_1.ppm > test0.ppm
	./a.out sage_1.ppm > test1.ppm
	./a.out start_1.ppm > test4.ppm
