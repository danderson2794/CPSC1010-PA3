#include "transform.h"

void printHeader(int row, int col){
  //prints ppm file
  printf("P6\n#this was created by Damion Anderson\n%i %i \n255\n", col, row);
}

void printImage(int row, int col, rgb array[][row]){
  int i = 0, j = 0;
  //prints pixel data
  for (i = 0; i < col; i++){
    for (j = 0; j < row; j++){
      printf("%c%c%c", array[i][j].r, array[i][j].g, array[i][j].b);
    }
  }
}
