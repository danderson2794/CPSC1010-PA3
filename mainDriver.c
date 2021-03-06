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


	parseHeader(&height, &width, inputFile);//located in parse.c


	rgb pixel[height][width];

	inputFile = fopen(argv[1], "r");

	getImage(inputFile, height, width, pixel);

	menuChoice = (int) printMenu();
	printHeader(height, width);

	if (menuChoice == 1){
		printImage(height, width, pixel);
	}

	else if (menuChoice == 2){
		mirrorImage(height, width, pixel);

	}
	else if (menuChoice == 3){
		flipHorizon(height, width, pixel);
	}
	else if (menuChoice == 4){
		grayScale(height, width, pixel);
	}


	return 0;
}
