#include "transform.h"

void printHeader(int row, int col){
  //prints ppm file
  printf("P6\n%i %i 255\n", row, col);
}

void printImage(int row, int col, rgb array[][col]){
  int i = 0, j = 0;
  //prints pixel data
  for (i = 0; i < row; i++){
    for (j = 0; j < col; j++){
      printf("%c%c%c", array[i][j].r, array[i][j].g, array[i][j].b);
    }
  }
}
