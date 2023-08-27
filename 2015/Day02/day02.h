int surfaceArea(int l, int w, int h) {
  return ((2*l*w) + (2*w*h) + (2*h*l));
}

int smallestSide(int l, int w, int h) {
  int temp1 = l * w;
  int temp2 = w * h;
  int temp3 = l * h;
  int min = 0;

  min = temp1;
  if (min > temp2) min = temp2;
  if (min > temp3) min = temp3;

  return min;
}

int smallestPerimeter(int l, int w, int h) {
    int temp1 = 2*(l + w);
    int temp2 = 2*(w + h);
    int temp3 = 2*(l + h);
    int min = 0;

    min = temp1;
    if (min > temp2) min = temp2;
    if (min > temp3) min = temp3;

    return min;
}