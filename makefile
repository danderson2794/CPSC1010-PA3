PA3:
	gcc -Wall parse.c mainDriver.c print.c transform.h printImage.c

run:
	./a.out tiger.ppm

test:
	@./a.out tiger.ppm > img1.ppm
	./a.out twoTigers.ppm > img2.ppm
	./a.out image.ppm > img3.ppm
	./a.out julia.ppm > img4.ppm
