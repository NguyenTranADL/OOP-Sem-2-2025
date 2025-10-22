#include <vector>
#include <queue>
#include <functional> 
#include <limits>     

/**
 * @brief Tìm phần tử lớn thứ k trong một vector số nguyên
 * * @details Hàm này sử dụng một Min-Heap (priority_queue với std::greater) có kích thước k
 * Heap này luôn chứa k phần tử lớn nhất đã được duyệt qua
 * Phần tử nhỏ nhất trong Heap này (tức là phần tử ở gốc) chính là phần tử lớn thứ k
 * * @param values Vector số nguyên chưa được sắp xếp
 * @param k Thứ hạng lớn nhất cần tìm (ví dụ: k=2 là lớn thứ hai)
 * @return int Phần tử lớn thứ k. Trả về INT_MIN nếu input k không hợp lệ
 */
int kth_largest(std::vector<int> values, int k) {
    // Xử lý trường hợp k không hợp lệ
    if (k <= 0 || k > values.size()) {
        return std::numeric_limits<int>::min(); 
    }

    // Khai báo Min-Heap (priority_queue với std::greater)
    // Cú pháp: priority_queue<Kiểu dữ liệu, Container cơ sở, Comparator>
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;

    for (int value : values) {
        // Nếu heap chưa đầy (kích thước < k), thêm phần tử vào
        if (min_heap.size() < k) {
            min_heap.push(value);
        } else {
            // Nếu heap đã đầy, so sánh giá trị hiện tại với phần tử nhỏ nhất trong heap (top)
            if (value > min_heap.top()) {
                // Nếu giá trị hiện tại lớn hơn, loại bỏ phần tử nhỏ nhất và thêm giá trị mới vào
                min_heap.pop();
                min_heap.push(value);
            }
        }
    }

    // Sau khi duyệt hết, phần tử ở gốc của Min-Heap chính là phần tử lớn thứ k
    return min_heap.top();
}
