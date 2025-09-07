#include "QuickSort.h"

void QuickSort::swap(int& a, int& b) {
  int temp = a;
  a = b;
  b = temp;
}

std::vector<int> QuickSort::sort(std::vector<int> list) {
  if (list.size() < 2) {
    return list;
  }
  quickSortRecursive(list, 0, list.size() - 1);
  return list;
}

void QuickSort::quickSortRecursive(std::vector<int>& list, int low, int high) {
  if (low < high) {
    int partitionIndex = partition(list, low, high);
    quickSortRecursive(list, low, partitionIndex - 1);
    quickSortRecursive(list, partitionIndex + 1, high);
  }
}

int QuickSort::partition(std::vector<int>& list, int low, int high) {
  int pivotIndex;
  if (high - low + 1 >= 3) {
    pivotIndex = low + 2;
  } else {
    pivotIndex = high;
  }

  int pivotValue = list[pivotIndex];
  swap(list[pivotIndex], list[high]);
  int i = low - 1;

  for (int j = low; j < high; ++j) {
    if (list[j] < pivotValue) {
      i++;
      swap(list[i], list[j]);
    }
  }

  swap(list[i + 1], list[high]);
  return i + 1;
}