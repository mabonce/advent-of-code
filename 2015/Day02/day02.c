#include <stdio.h>
#include "day02.h"

int main() {
  int wrapPerPresent = 0;
  int totalWrap = 0;
  FILE *inputFile;
  int bow = 0;
  int ribbonPerPresent = 0;
  int totalRibbon = 0;
  
  int l;
  int w;
  int h;

  inputFile = fopen("input.txt", "r");

  while((fscanf(inputFile, "%ix%ix%i", &l, &w, &h)) != EOF) {
    wrapPerPresent = surfaceArea(l, w, h) + smallestSide(l, w, h);
    totalWrap += wrapPerPresent;

    bow = l*w*h;
    ribbonPerPresent = smallestPerimeter(l, w, h) + bow;
    totalRibbon += ribbonPerPresent;
  }

  fclose(inputFile);

  printf("\nTotal square footage of wrapping paper needed:\t%i\n", totalWrap);
  printf("\nTotal footage of ribbon needed:\t%i\n", totalRibbon);

  return 0;
}
