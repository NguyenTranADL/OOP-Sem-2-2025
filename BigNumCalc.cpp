#include "BigNumCalc.h"
#include <algorithm>

BigNumCalc::BigNumCalc() {}
BigNumCalc::~BigNumCalc() {}

std::list<int> BigNumCalc::buildBigNum(const std::string& numString) {
    std::list<int> digits;
    for (char c : numString) {
        if (isdigit(c)) {
            digits.push_back(c - '0');
        }
    }
    return digits;
}

std::list<int> BigNumCalc::add(const std::list<int>& num1, const std::list<int>& num2) {
    std::list<int> result;
    auto it1 = num1.rbegin(), it2 = num2.rbegin();
    int carry = 0;
    while (it1 != num1.rend() || it2 != num2.rend() || carry) {
        int digitSum = carry;
        if (it1 != num1.rend()) {
            digitSum += *it1;
            ++it1;
        }
        if (it2 != num2.rend()) {
            digitSum += *it2;
            ++it2;
        }
        result.push_front(digitSum % 10); 
        carry = digitSum / 10;            
    }
    while (result.size() > 1 && result.front() == 0) {
        result.pop_front();
    }
    return result;
}

std::list<int> BigNumCalc::sub(const std::list<int>& num1, const std::list<int>& num2) {
    std::list<int> result;
    auto it1 = num1.rbegin(), it2 = num2.rbegin();
    int borrow = 0;
    while (it1 != num1.rend() || it2 != num2.rend()) {
        int digitDiff = borrow;
        if (it1 != num1.rend()) {
            digitDiff += *it1;
            ++it1;
        }
        if (it2 != num2.rend()) {
            digitDiff -= *it2;
            ++it2;
        }
        if (digitDiff < 0) {
            digitDiff += 10;
            borrow = -1; 
        } else {
            borrow = 0;
        }
        result.push_front(digitDiff);
    }
    while (result.size() > 1 && result.front() == 0) {
        result.pop_front();
    }
    return result;
}

std::list<int> BigNumCalc::mul(const std::list<int>& num1, const std::list<int>& num2) {
    int multiplier = num2.back();
    std::list<int> result;
    auto it1 = num1.rbegin();
    int carry = 0;
    while (it1 != num1.rend() || carry) {
        int prod = carry;
        if (it1 != num1.rend()) {
            prod += (*it1) * multiplier;
            ++it1;
        }
        result.push_front(prod % 10);
        carry = prod / 10;
    }
    while (result.size() > 1 && result.front() == 0) {
        result.pop_front();
    }
    return result;
}