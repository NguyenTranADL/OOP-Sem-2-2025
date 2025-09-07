#include <iostream>
#include <vector>
#include <string>
#include <sstream>
#include "QuickSort.h"
#include "RecursiveBinarySearch.h"

void printVector(const std::vector<int>& vec) {
    for (int num : vec) {
        std::cout << " " << num;
    }
    std::cout << std::endl;
}

int main() {
    std::vector<int> numbers;
    int number;
    std::string line;

    std::getline(std::cin, line);
    std::stringstream ss(line);

    while (ss >> number) {
        numbers.push_back(number);
    }

    QuickSort quickSorter;
    std::vector<int> sortedNumbers = quickSorter.sort(numbers);

    RecursiveBinarySearch searcher;
    bool found = searcher.search(sortedNumbers, 1);

    std::cout << (found ? "true" : "false");
    printVector(sortedNumbers);

    return 0;
}