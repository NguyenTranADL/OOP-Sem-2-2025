#include "BigNumCalc.h"
#include <algorithm>

BigNumCalc::BigNumCalc() {}
BigNumCalc::~BigNumCalc() {}

std::list<int> BigNumCalc::buildBigNum(const std::string& numString) {
    std::list<int> result;
    for (char c : numString) {
        if (isdigit(c)) result.push_back(c - '0');
    }
    return result;
}

std::list<int> BigNumCalc::add(const std::list<int>& num1, const std::list<int>& num2) {
    std::list<int> res;
    auto it1 = num1.rbegin(), it2 = num2.rbegin();
    int carry = 0;
    while (it1 != num1.rend() || it2 != num2.rend() || carry) {
        int sum = carry;
        if (it1 != num1.rend()) sum += *it1++;
        if (it2 != num2.rend()) sum += *it2++;
        res.push_front(sum % 10);
        carry = sum / 10;
    }
    while (res.size() > 1 && res.front() == 0) res.pop_front();
    return res;
}

std::list<int> BigNumCalc::sub(const std::list<int>& num1, const std::list<int>& num2) {
    std::list<int> res;
    auto it1 = num1.rbegin(), it2 = num2.rbegin();
    int borrow = 0;
    while (it1 != num1.rend() || it2 != num2.rend()) {
        int diff = borrow;
        if (it1 != num1.rend()) diff += *it1++;
        if (it2 != num2.rend()) diff -= *it2++;
        if (diff < 0) {
            diff += 10;
            borrow = -1;
        } else {
            borrow = 0;
        }
        res.push_front(diff);
    }
    while (res.size() > 1 && res.front() == 0) res.pop_front();
    return res;
}

std::list<int> BigNumCalc::mul(const std::list<int>& num1, const std::list<int>& num2) {
    int digit = num2.back(); // num2 is 1 digit
    std::list<int> res;
    auto it1 = num1.rbegin();
    int carry = 0;
    while (it1 != num1.rend() || carry) {
        int prod = carry;
        if (it1 != num1.rend()) prod += (*it1++) * digit;
        res.push_front(prod % 10);
        carry = prod / 10;
    }
    while (res.size() > 1 && res.front() == 0) res.pop_front();
    return res;
}