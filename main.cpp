#include <iostream>
#include <string>
#include "Reverser.h"
#include "Truckloads.h"

int main() {
    Truckloads truck;
    std::cout << "Có 10 xác, mỗi xe chở được 4 xác, số xe cần là: " << truck.numTrucks(10,4) << std::endl;
    std::cout << "Có 257 xác, mỗi xe chở được 7 xác, số xe cần là: " << truck.numTrucks(257,7) << std::endl;

    Reverser r;
    int num1 = 12345;
    int reversedNum1 = r.reverseDigit(num1);
    std::cout << "Original number: " << num1 << std::endl;
    std::cout << "Reversed number: " << reversedNum1 << std::endl;
    std::cout << std::endl;

    int num2 = -123;
    int reversedNum2 = r.reverseDigit(num2);
    std::cout << "Original number: " << num2 << std::endl;
    std::cout << "Reversed number (error case): " << reversedNum2 << std::endl;
    std::cout << std::endl;

    std::string str1 = "hello";
    std::string reversedStr1 = r.reverseString(str1);
    std::cout << "Original string: " << str1 << std::endl;
    std::cout << "Reversed string: " << reversedStr1 << std::endl;
    std::cout << std::endl;

    std::string str2 = "";
    std::string reversedStr2 = r.reverseString(str2);
    std::cout << "Original string: \"" << str2 << "\"" << std::endl;
    std::cout << "Reversed string (error case): " << reversedStr2 << std::endl;

    return 0;
}