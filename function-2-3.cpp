#include<iostream>

void two_five_nine(int array[], int n) {
  int twocount = 0;
  int fivecount = 0;
  int ninecount = 0;

  if (n > 1) {
    for (int i = 0; i < n; i++) {
      switch (array[i]) {
        case 2:
            twocount ++;
            break;
        case 5 :
            fivecount ++;
            break;
        case 9 :
            ninecount ++;
            break;
      }
    }
  }
  printf("2:%d;5:%d;9:%d;\n", twocount, fivecount, ninecount);
}