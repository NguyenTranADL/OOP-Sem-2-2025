#include <iostream>
#include <vector>
#include "Sort.h"
#include "BubbleSort.h"
#include "QuickSort.h"

void printVector(const std::vector<int>& vec) {
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void testSort(Sort* sorter, const std::string& sortName, const std::vector<int>& input) {
    std::cout << "Testing " << sortName << "..." << std::endl;
    std::cout << "Original list: ";
    printVector(input);

    std::vector<int> sortedList = sorter->sort(input);

    std::cout << "Sorted list:   ";
    printVector(sortedList);
    std::cout << "-----------------------------------" << std::endl;
}

int main() {
    std::vector<int> list1 = {5, 2, 8, 1, 9, 4, 7, 6, 3};
    std::vector<int> list2 = {10, 3, 7, 5, 2, 9, 1, 6, 8, 4};
    std::vector<int> list3 = {5, 4, 3, 2, 1}; 
    std::vector<int> list4 = {1, 2, 3, 4, 5}; 
    std::vector<int> list5 = {4, 2, 9, 1}; 

    BubbleSort bubbleSort;
    QuickSort quickSort;

    testSort(&bubbleSort, "Bubble Sort", list1);
    testSort(&quickSort, "Quick Sort", list2);

    testSort(&bubbleSort, "Bubble Sort (Reverse)", list3);
    testSort(&quickSort, "Quick Sort (Reverse)", list3);
    
    testSort(&bubbleSort, "Bubble Sort (Sorted)", list4);
    testSort(&quickSort, "Quick Sort (Sorted)", list4);

    testSort(&quickSort, "Quick Sort (Specific Pivot Test)", list5);

    return 0;
}