#include "Sort.h"

class QuickSort : public Sort {
    private:
        void quickSort(std::vector<int>& arr, int left, int right);
        int partition(std::vector<int>& arr, int left, int right);
    public:
        std::vector<int> sort(const std::vector<int>& list) override;
};