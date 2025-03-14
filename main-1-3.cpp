#include <iostream>
using namespace std;

extern void count_digits(int array[4][4]);

int main() {

int matrix[4][4];

cout << "Enter a 4x4 matrix row by row: " << endl;
for ( int i = 0; i < 4; i++) {
    for ( int j = 0; j < 4; j++) {
        cin >> matrix[i][j];
    }
}
count_digits(matrix);
return 0;
}