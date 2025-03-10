#include <iostream>

extern bool is_descending(int array[], int n);

int main() {
    int array[] = {6, 4, 3, 2, 1, 0};
    int size1 = 6;

    printf("Array is descending: %s\n",is_descending(array, size1) ? "true" : "false");    
    return 0;
}