#include <iostream>

extern void two_five_nine(int array[], int n);

int main() {
    int array[] = {2, 5, 9, 2, 9, 9, 5, 2};
    int size = 8;
    two_five_nine(array, size);
    return 0;
}