#include "transform.h"
void grayScale(int row, int col, rgb array[][col]){
  int i = 0, j = 0;
  rgb average[row][col];

  for (i = 0; i < row; i++){
    for (j = 0; j < col; j++){

      array[i][j].r = ((array[i][j].r + array[i][j].b + array[i][j].g)/3);
      array[i][j].g = ((array[i][j].r + array[i][j].b + array[i][j].g)/4);
      array[i][j].b = ((array[i][j].r + array[i][j].b + array[i][j].g)/4);

      average[i][j].r = array[i][j].r + 100; //20 and 5
      average[i][j].g = array[i][j].g / .05;
      average[i][j].b = array[i][j].b / .05;

      if (average[i][j].r > 255){
        average[i][j].r = 255;
      }

      if (average[i][j].g < 0){
        average[i][j].g = array[i][j].g;
      }
      if (average[i][j].b < 0){
        average[i][j].b = array[i][j].b;
      }
    }
  }

  printImage(row, col, array);
}
