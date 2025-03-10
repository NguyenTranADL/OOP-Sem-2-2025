#include <iostream>

extern int num_count(int array[], int n, int number); 
int main() {
    int array[] = {3, 7, 1, 9, 4, 3, 3};  
    int size = 7;
    int number = 3;  

printf("Number of elements equal to %d is: %d",number, num_count(array, size, number));
    return 0;
}