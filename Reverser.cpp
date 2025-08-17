#include <iostream>
#include <string>
#include <stdexcept>
#include <algorithm>
#include <vector>

class Reverser {
public:
  int reverseDigit(int value) {
    if (value < 0) {
      return -1;
    }

    static int reversedNumber = 0;
    static bool isFirstCall = true;

    if (value == 0) {
      int result = reversedNumber;
      reversedNumber = 0;
      isFirstCall = true;
      return result;
    }

    int lastDigit = value % 10;
    reversedNumber = reversedNumber * 10 + lastDigit;

    if (isFirstCall) {
      isFirstCall = false;
      return reverseDigit(value / 10);
    } else {
      return reverseDigit(value / 10);
    }
  }

  std::string reverseString(std::string characters) {
    if (characters.empty()) {
      return "ERROR";
    }

    if (characters.length() == 1) {
      return characters;
    }
    
    return characters.back() + reverseString(characters.substr(0, characters.length() - 1));
  }
};

int main() {
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

