#include <iostream> 

extern int count_evens(int number);
int main() {
    int number = 10; 

    printf("Number of even numbers between 1 and %d are: %d\n", number, count_evens(number));

    return 0;
}