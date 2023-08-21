#include <stdio.h>
#include "day02.h"

int main() {
  int totalSA = 0;
  FILE *inputFile;
  int currentChar;
  
  int l;
  int w;
  int h;

  inputFile = fopen("input.txt", "r");

  while(1) {
    currentChar = null; //need to pick up from here on how to read the dimensions

    if(feof(inputFile)) {
      printf("\nTotal square footage of wrapping paper needed: \n", totalSA);
      break;
    }


  }

  retun 0
}
