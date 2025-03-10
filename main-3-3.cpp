#include <iostream>

extern double weighted_average(int array[], int n);

int main() {
    int array[] = {1, 2, 1, 4, 1, 3};  
    int n = 6; 
    std:: cout << "Weighted average: " << weighted_average(array, n); 

    return 0;
}
