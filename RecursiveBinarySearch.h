#include <vector>

class RecursiveBinarySearch {
    private:
        bool recursiveSearch(const std::vector<int>& list, int target, int low, int high);
    public:
        bool search(std::vector<int> list, int target);
};