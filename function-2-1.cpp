#include <iostream>

int min_element(int array[], int n) {
  int min_num = array[0];

  if (n < 1) {
    return 0;
  }

  for(int i = 0; i < n; i++) {
    if(array[i] < min_num) {min_num = array[i]; }
  }

  return min_num;
}
