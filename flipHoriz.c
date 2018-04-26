#include "transform.h"

void flipHorizon(int row, int col, rgb array[][col]){
int i = 0, j = 0;
  rgb flipArray[row][col];
  for (i = 0; i < row; i++){
    for (j = 0; j < col; j++){
      flipArray[i][j] = array[row - 1 -i][j];

      }

    }

  printImage(row, col, flipArray);

}
