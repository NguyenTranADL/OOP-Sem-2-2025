#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include "LinkedList.h"
#include "BigNumCalc.h"

int main() {
    std::string line;
    std::getline(std::cin, line);
    std::istringstream iss(line);

    std::vector<int> nums;
    std::string token;
    // Read integers until a non-integer token is found
    while (iss >> token) {
        try {
            int num = std::stoi(token);
            nums.push_back(num);
        } catch (...) {
            break;
        }
    }

    // The next token is the function code
    std::string func = token;
    int param1 = 0, param2 = 0;
    iss >> param1 >> param2;

    // Create LinkedList from nums
    LinkedList list;
    if (!nums.empty()) {
        list = LinkedList(nums.data(), nums.size());
    }

    if (func == "I") {
        list.insertPosition(param1, param2);
        // Print list
        std::vector<int> values;
        for (int i = 1; ; ++i) {
            int val = list.get(i);
            if (val == std::numeric_limits<int>::max()) break;
            values.push_back(val);
        }
        if (!values.empty()) {
            std::cout << "[";
            for (size_t i = 0; i < values.size(); ++i) {
                std::cout << values[i];
                if (i + 1 < values.size()) std::cout << " ";
            }
            std::cout << "]" << std::endl;
        }
    } else if (func == "D") {
        list.deletePosition(param1);
        // Print list
        std::vector<int> values;
        for (int i = 1; ; ++i) {
            int val = list.get(i);
            if (val == std::numeric_limits<int>::max()) break;
            values.push_back(val);
        }
        if (!values.empty()) {
            std::cout << "[";
            for (size_t i = 0; i < values.size(); ++i) {
                std::cout << values[i];
                if (i + 1 < values.size()) std::cout << " ";
            }
            std::cout << "]" << std::endl;
        }
    } else if (func == "G") {
        int val = list.get(param1);
        std::cout << val << " ";
        // Print list
        std::vector<int> values;
        for (int i = 1; ; ++i) {
            int v = list.get(i);
            if (v == std::numeric_limits<int>::max()) break;
            values.push_back(v);
        }
        if (!values.empty()) {
            std::cout << "[";
            for (size_t i = 0; i < values.size(); ++i) {
                std::cout << values[i];
                if (i + 1 < values.size()) std::cout << " ";
            }
            std::cout << "]" << std::endl;
        }
    } else if (func == "S") {
        int idx = list.search(param1);
        std::cout << idx << std::endl;
    } else if (func == "+" || func == "-" || func == "*") {
        // BigNumCalc part
        std::string num1 = token;
        std::string op = func;
        std::string num2;
        iss >> num2;

        BigNumCalc calc;
        std::list<int> n1 = calc.buildBigNum(num1);
        std::list<int> n2 = calc.buildBigNum(num2);
        std::list<int> result;
        if (op == "+") result = calc.add(n1, n2);
        else if (op == "-") result = calc.sub(n1, n2);
        else if (op == "*") result = calc.mul(n1, n2);

        for (int digit : result) std::cout << digit;
        std::cout << std::endl;
    }

    return 0;
}