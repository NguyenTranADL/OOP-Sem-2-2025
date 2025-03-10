#include <iostream>

extern int max_element(int array[], int n);

int main() {
    int array[] = {7, 2, 5, 0, 9};
    int size = 5;
    printf("Maximum element:%d\n",max_element(array, size));
    return 0;
}