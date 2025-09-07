#include "QuickSort.h"

std::vector<int> QuickSort::sort(const std::vector<int>& list) {
    std::vector<int> arr = list;
    quickSort(arr, 0, arr.size() - 1);
    return arr;
}

void QuickSort::quickSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int pivotIndex = partition(arr, left, right);
        quickSort(arr, left, pivotIndex - 1);
        quickSort(arr, pivotIndex + 1, right);
    }
}

int QuickSort::partition(std::vector<int>& arr, int left, int right) {
    int len = right - left + 1;
    int pivotIdx = (len >= 3) ? left + 2 : left; 
    int pivot = arr[pivotIdx];
    std::swap(arr[pivotIdx], arr[right]);

    int storeIdx = left;
    for (int i = left; i < right; ++i) {
        if (arr[i] < pivot) {
            std::swap(arr[i], arr[storeIdx]);
            ++storeIdx;
        }
    }
    std::swap(arr[storeIdx], arr[right]);
    return storeIdx;
}