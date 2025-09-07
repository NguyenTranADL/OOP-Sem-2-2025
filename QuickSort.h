#include "Sort.h"

class QuickSort : public Sort {
    private:
        void quickSortRecursive(std::vector<int>& list, int low, int high);
        int partition(std::vector<int>& list, int low, int high);
        void swap(int& a, int& b);
    public:
        std::vector<int> sort(std::vector<int> list) override;

};