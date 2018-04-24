/*  ---------------------------------------------------------------------------
    Damion Anderson
    6 April, 2018
    CSPC1011 - Section 002
    Lab 11

		Function Description:
		This function takes in the ppm file and parses through header for the
    width and height of the image.
------------------------------------------------------------------------------*/
#include "transform.h"

void parseHeader(int *row, int *col, FILE *ppmFile){
  int i = 0, j = 0, k = 0, innerRow = 0, innerCol = 0;
  char header[100], width[5] = {0}, height[5] = {0};

  fgets(header, 100, ppmFile);

  if (strlen(header) == 3){ //This is looking for cases that has the P6 on the
    fgets(header, 100, ppmFile); //first line only.
  }

  else{ //if the P6 is not on the first line only, we check for comments to e
    i = 3; // delete and start at the 3rd element in header array.
  }
  while (header[0] == '#'){
    fgets(header, 100, ppmFile); //Eliminates multiple line comments
  }

  while (header[i] != ' '){ //stores width into array width which will be
    width[k] = header[i];   //converted further down into our pointer.
    i++;
    k++;
  }

  i++; //incrememnts to skip the ' ' character.

  while (header[i] != '\n' && header[i] != ' '){
    height[j] = header[i]; //This is parsing through the header array for height
    i++;
    j++;
  }

  sscanf(width, "%d", &innerCol);//converts char width array to int array
  *col = innerCol; // changing the value of our height and width in mainDriver.c
  sscanf(height, "%d", &innerRow);//same as above for both parts.
  *row = innerRow;
  }

void getImage(FILE *imageFile, int row, int col, rgb array[row][col]){
  int i = 0, j = 0, headerItems = 0;
  char pixelData[256];


  fgets(pixelData, 256, imageFile);


  do {
    if (pixelData[i] == '#'){
      fgets(pixelData, 256, imageFile);
      i = 0;
    }
    else {
      while (pixelData[i] != ' ' && pixelData[i] != '\n'){
        i++;
      }
      headerItems++;
      if (pixelData[i] == ' '){
        i++;
        }
      else if (pixelData[i] == '\n' && headerItems != 4){
        fgets(pixelData, 256, imageFile);
        i = 0;
      }
    }
  } while(headerItems < 4);

  for (i = 0; i < row; i++){
    for (j = 0; j < col; j++){
        array[i][j].r = fgetc(imageFile);
        array[i][j].g = fgetc(imageFile);
        array[i][j].b = fgetc(imageFile);
      }
  }
}
