#include "transform.h"

void mirrorImage(int row, int col, rgb array[row][col]){
  int i = 0, j = 0, m = 0, n = col - 1, count = 0;
  //printf("b is %d\n", b);
  rgb temp;

  for (i = 0; i < row; i++){
    m = 0, n = col - 1;
    for (j = 0; j < col / 2; j++){
      temp = array[i][m];
      array[i][j] = array[i][n];
      array[i][n] = temp;
      n--, m++;
      count++;
    }
  }

  /*for (i = 0; i < row; i++){
    n = col - 1, m = 0;
    for (j = 0; j < col; j++){
      array[i][j] = temp[i][j];
      n--, m++;
    }
  }*/


  printImage(row, col, array);
}
