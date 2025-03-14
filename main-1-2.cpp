#include <iostream>
using namespace std;

extern int is_identity(int array[10][10]);

int main() {
    int matrix[10][10];
    cout << "Enter a 10x10 matrix row by row: " << endl;
    for ( int i = 0; i < 10; i++){
        for ( int j = 0; j < 10; j++){
            cin >> matrix[i][j];
        }
    }
    cout << (is_identity(matrix) ? 1 : 0) << endl;
    return 0;
}