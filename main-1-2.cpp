#include <iostream>

extern double array_mean(int array[], int n);
int main() {
    int array[] = {3, 7, 1, 9, 20};  
    int n = 5;
    printf("Mean of array elements:%.1f\n",array_mean(array, n));
    return 0;
}