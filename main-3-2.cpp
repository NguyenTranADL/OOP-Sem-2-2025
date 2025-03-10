#include <iostream>

using namespace std;

extern int median_array(int array[], int n);

int main () {
    int arr[] = {3, 5, 2, 1, 4};  
    cout << "Median: " << median_array(arr, 5) << endl;

    return 0;
}
