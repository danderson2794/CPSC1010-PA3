#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  unsigned char r, g, b;
}rgb;



// prototypes in parse.c file:
void parseHeader(int *row, int *col, FILE *ppmFile);
void getImage(FILE *imageFile, int row, int col, rgb array[][col]);
void printHeader(int row, int col);

int printMenu();

void mirrorImage(int row, int col, rgb array[][col]);
void flipHorizon(int row, int col, rgb array[][col]);
void grayScale(int row, int col, rgb array[][col]);
void printImage(int row, int col, rgb array[][col]);
