#include <iostream>
using namespace std;

extern int array_min(int integers[], int length);
extern int array_max(int integers[], int length);
extern int sum_min_max(int integers[], int length);

int main() {
    int arr1[] = {3, 1, 4, 1, 5, 9};  
    int arr2[] = {10};                
    int arr3[] = {};                  

    int length1 = 6;
    int length2 = 1;
    int length3 = 0;

    cout << "Min of arr1: " << array_min(arr1, length1) << endl;
    cout << "Max of arr1: " << array_max(arr1, length1) << endl;
    cout << "Sum of min and max of arr1: " << sum_min_max(arr1, length1) << endl;

    cout << "Min of arr2: " << array_min(arr2, length2) << endl;
    cout << "Max of arr2: " << array_max(arr2, length2) << endl;
    cout << "Sum of min and max of arr2: " << sum_min_max(arr2, length2) << endl;

    cout << "Min of empty arr3: " << array_min(arr3, length3) << endl;
    cout << "Max of empty arr3: " << array_max(arr3, length3) << endl;
    cout << "Sum of min and max of empty arr3: " << sum_min_max(arr3, length3) << endl;

    return 0;
}
