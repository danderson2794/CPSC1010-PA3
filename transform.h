#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  unsigned char red;
  unsigned char green;
  unsigned char blue;
}rgb;



// prototypes in parse.c file:
void parseHeader(int *row, int *col, FILE *ppmFile);

void getImage(FILE *imageFile, int *row, int *col, rgb array[][*col]);


int printMenu();

/*void mirrorImage( rgb array[*][int], int height, int width);
void flipHorizon(rgb array[*][int], int height, int width);
void grayScale(rgb array[*][int], int height, int width);
void printImage(rgb array[*][int], int height, int width);*/
