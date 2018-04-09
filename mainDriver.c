/*  ---------------------------------------------------------------------------
    Damion Anderson
    6 April, 2018
    CSPC1011 - Section 002
    Lab 11

		Program Description:
		This program will take in a ppm file and parse through the header looking
		for the width and height of the image. This program was made to be portable
		so that it may be used during Programming Assingment 3.

		Makefile only has one argument and it's to compile the program
------------------------------------------------------------------------------*/
#include "defs.h"

void parseHeader(int *row, int *col, FILE *ppmFile);

int main(int argc, char *argv[]) {
	int width = 20, height = 20;
	FILE *inputFile;

	/* if user only types the executable name and no other arguments,
	// remind them to type the image file name also */
	if (argc == 1) {
		fprintf(stderr, "<executable> <image_name>\n");
		exit(1);
	}


	//This portion opens the image file for reading

	inputFile = fopen(argv[1], "r");

	if (inputFile == NULL){ //This catches if there's an error compiling
		fprintf(stderr, "File open error. Exiting program.\n");
		exit(1);
	 }


	/*This gets the width and height of the image and print values to user
		the address of the width and height are sent to function parseHeader
		see the parse.c file for more information.*/


	parseHeader(&width, &height, inputFile);

	fprintf(stderr, "\nwidth is %d, height is %d \n\n", width, height);


	return 0;
}
