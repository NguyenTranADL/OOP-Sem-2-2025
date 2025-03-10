#include <iostream>

extern bool is_ascending(int array[], int n);

int main() {
    int array[] = {1, 2, 3, 4, 6};
    int size1 = 5;

    printf("Array is ascending: %s\n",is_ascending(array, size1) ? "true" : "false");    
    return 0;
}