#include <iostream>

extern int min_element(int array[], int n);

int main() {
    int array[] = {7, 2, 5, 0, 9};
    int size = 5;
    printf("Minimum element:%d\n",min_element(array, size));
    return 0;
}