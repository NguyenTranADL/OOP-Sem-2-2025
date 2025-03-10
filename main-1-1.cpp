#include <iostream>

extern int array_sum(int array[], int n);
int main() {
    int array[] = {3, 7, 1, 9, 4};  
    int size = sizeof(array) / sizeof(array[0]); 
    printf("Sum of array elements:%d\n",array_sum(array, size));
    return 0;
}