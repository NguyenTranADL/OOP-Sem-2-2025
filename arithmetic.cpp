#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int addBinary (int a, int b) {
    return a + b;
}

int subBinary (int a, int b) {
    return a - b;
}

int leftShift (int num, int shift) {
    return num << shift;
}

int rightShift (int num, int shift) {
    return num >> shift;
}

    string toBinary(int num) {
        if (num == 0) return "0";
        string binary = "";
        while (num > 0) {
            binary = (num % 2 == 0 ? "0" : "1") + binary;
            num /= 2;
        }
        return binary;
    }
    
    int main() {
        int num1, num2, shift;
    
        cout << "Enter the first number (as a decimal): ";
        cin >> num1;
    
        cout << "Enter the second number (as a decimal): ";
        cin >> num2;
    
        cout << "Enter the number of bits to shift: ";
        cin >> shift;
    
        int addResult = addBinary(num1, num2);
        int subResult = subBinary(num1, num2);
        int leftShiftResult = leftShift(num1, shift);
        int rightShiftResult = rightShift(num1, shift);
    
        cout << "Add result: " << toBinary(addResult) << endl;
        cout << "Sub result: " << toBinary(subResult) << endl;
        cout << "Left shift result: " << toBinary(leftShiftResult) << endl;
        cout << "Right shift result: " << toBinary(rightShiftResult) << endl;
    
        return 0;
    }
