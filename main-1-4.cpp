#include <iostream>

extern int sum_two_arrays(int array[], int secondarray[], int n);
int main() {
    int array1[] = {3, 7, 1, 9, 4};  
    int array2[] = {2, 8, 5, 6, 3};  
    int size = 5;
    printf("Total sum of both arrays:%d",sum_two_arrays(array1, array2, size));

    return 0;
}