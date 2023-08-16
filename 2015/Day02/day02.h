int surfaceArea(int l, int w, int h) {
  return ((2*l*w) + (2*w*h) + (2*h*l));
}

int smallestSide(int l, int w, int h) {
  int temp1 = l * w;
  int temp2 = w * h;
  int temp3 = l * h;

  if (temp1 < temp2 && temp1 < temp3) {
    return temp1;
  }
  else if (temp2 < temp1 && temp2 < temp3) {
    return temp2;
  }
  else {
    return temp3;
  }
}
