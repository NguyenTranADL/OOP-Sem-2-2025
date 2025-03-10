#include <iostream>
using namespace std;

extern bool is_fanarray(int array[], int n);

int main() {
    int arr[] = {1, 2, 3, 2, 1}; 
    cout << boolalpha << is_fanarray(arr, 5) << endl;
    return 0;
}