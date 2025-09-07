#include "RecursiveBinarySearch.h"
#include <iostream>

bool RecursiveBinarySearch::search(std::vector<int> list, int target) {
    if (list.empty()) {
        return false;
    }
    return recursiveSearch(list, target, 0, list.size() - 1);
}

bool RecursiveBinarySearch::recursiveSearch(const std::vector<int>& list, int target, int low, int high) {
    if (low > high) {
        return false;
    }

    int mid = low + (high - low) / 2;

    if (list[mid] == target) {
        return true;
    } else if (list[mid] > target) {
        return recursiveSearch(list, target, low, mid - 1);
    } else {
        return recursiveSearch(list, target, mid + 1, high);
    }
}