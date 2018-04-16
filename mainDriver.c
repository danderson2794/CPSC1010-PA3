/*  ---------------------------------------------------------------------------
    Damion Anderson
    22 April, 2018
    CSPC1010 - Section 002
    PA3

		Program Description:
		This program will take in a ppm file and parse through the header looking
		for the width and height of the image. This program was made to be portable
		so that it may be used during Programming Assingment 3.

		Makefile only has one argument and it's to compile the program
------------------------------------------------------------------------------*/
#include "transform.h"

int main(int argc, char *argv[]) {
	int width = 20, height = 20, menuChoice = 0;
	FILE *inputFile;

	/* if user only types the executable name and no other arguments,
			remind them to type the image file name also. line 27 opens the image */
	if (argc == 1) {
		fprintf(stderr, "<executable> <image_name>\n");
		exit(1);
	}

	inputFile = fopen(argv[1], "r");

	if (inputFile == NULL){ //This catches if there's an error compiling
		fprintf(stderr, "File open error. Exiting program.\n");
		exit(1);
	 }


	/* This gets the width and height of the image and print values to user
		 the address of the width and height are sent to function parseHeader
		 see the parse.c file for more information. */


	parseHeader(&width, &height, inputFile);//located in parse.c

	printf("Height is %d width is %d\n\n", height, width);

	rgb pixel[height][width];
	/*int i = 0, j = 0;
	for (i = 0; i < height; i++){
		for(j = 0; j < width; j++){
			printf("height value:%i  width value: %i\n", pixel[i][j]);
		}
	}*/

	getImage(inputFile, &height, &width, pixel);

	menuChoice = (int) printMenu();

	/*if (menuChoice == 2){
		mirrorImage(pixel, height, width);
	}
	else if (menuChoice == 3){
		flipHorizon(pixel, height, width);
	}
	else if (menuChoice == 4){
		grayScale(pixel, height, width);
	}
	else if (menuChoice == 1){
		printImage(pixel, height, width);
	}*/

	return 0;
}
