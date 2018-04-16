#include "transform.h"


int printMenu(){
  int selectedOption = 0;


  do {
  printf("What would you like to do to your image?\n\n");
  printf("1. original Image\n2. Mirror Image\n3. Upside Down Image\n4. gray"
      " scale image\n\n\nMENU CHOICE:    ");
  scanf("%d", &selectedOption);

  } while ((selectedOption < 1) || selectedOption > 4 );


  return selectedOption;
}
