/*  ---------------------------------------------------------------------------
    Damion Anderson
    25 April, 2018
    CSPC1010 - Section 002
    PA3

		Function Description:
		This function will mirror the image by take the last pixel in the row and
    switching it with the first.
------------------------------------------------------------------------------*/

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

  printImage(row, col, array);
}
