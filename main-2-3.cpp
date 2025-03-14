#include <iostream>
using namespace std;

extern bool is_palindrome(int integers[], int length);
extern int sum_array_elements(int integers[], int length);
extern int sum_if_palindrome(int integers[], int length);

int main() {
    int arr1[] = {1, 2, 3, 2, 1};  
    int arr2[] = {1, 2, 3, 4, 5};  
    int arr3[] = {};              
    int arr4[] = {7, 8, 8, 7};

    int length1 = 5;
    int length2 = 5;
    int length3 = 0;
    int length4 = 4;

    cout << "Sum of arr1 if palindrome: " << sum_if_palindrome(arr1, length1) << endl;
    cout << "Sum of arr2 if palindrome: " << sum_if_palindrome(arr2, length2) << endl;
    cout << "Sum of empty array: " << sum_if_palindrome(arr3, length3) << endl;
    cout << "Sum of arr4 if palindrome: " << sum_if_palindrome(arr4, length4) << endl;

    return 0;
}