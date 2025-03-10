#include <iostream>

int array_sum(int array[], int n) {
  int sum = 0;

  if (n < 1) {
    return sum;
  }

  for (int i = 0; i < n; i++) {
    sum = array[i] + sum;
  }

  return sum;
}