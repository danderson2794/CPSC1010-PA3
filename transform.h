#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// prototypes in parse.c file:
void parseHeader(int *row, int *col, FILE *ppmFile);
void getImage(FILE *imageFile);

//pixel
  typedef struct{
    unsigned char red;
    unsigned char green;
    unsigned char blue;
  }rgb;

int printMenu();

mirrorImage(struct *);
flipHorizon(struct *);
grayScale(struct *);
