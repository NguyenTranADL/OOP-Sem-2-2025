#include <iostream>
using namespace std;

void count_digits(int array[4][4]) {
    int count[10] ={0}; // Create an array to store counts of digits 0-9
    for ( int i = 0; i < 4; i++) {
        for ( int j = 0; j < 4; j++){
            ( count[array[i][j]]++ ); // Increment count of the digit found in matrix
        }
    }
    for ( int i = 0; i < 10; i++) {
        cout << i << ':' << count[i] << ';';
    }
    cout << endl;
}