#include <vector>

class Sort {
public:
    virtual std::vector<int> sort(const std::vector<int>& list) = 0;
    virtual ~Sort() = default;
};