#include <vector>
#include <queue>
#include <functional> 
#include <limits>     
#include <cstddef>    

/**
 * @brief Tìm phần tử lớn thứ k (Kth Largest Element) trong một mảng
 * @details Thuật toán sử dụng một Min-Heap (Heap Tối thiểu) để lưu trữ 
 * K phần tử lớn nhất đã duyệt qua. Độ phức tạp là O(N log K)
 * @param values Mảng số nguyên không sắp xếp
 * @param k Thứ tự của phần tử lớn nhất (ví dụ: k=1 là lớn nhất)
 * @return Giá trị của phần tử lớn thứ k, hoặc INT_MIN nếu k không hợp lệ
 */

int kth_largest(std::vector<int> values, int k) {
    const size_t K_SIZE = static_cast<size_t>(k);
    
    // Kiểm tra tính hợp lệ của k: k phải lớn hơn 0 và không vượt quá kích thước mảng
    if (k <= 0 || K_SIZE > values.size()) {
        // Trả về giá trị tối thiểu của int nếu đầu vào không hợp lệ
        return std::numeric_limits<int>::min(); 
    }

    // Khai báo Min-Heap (std::priority_queue với comparator std::greater)
    // Min-Heap này sẽ chỉ giữ K phần tử lớn nhất
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;

    // Duyệt qua từng giá trị trong mảng đầu vào
    for (int value : values) {
        
        // Luôn đẩy phần tử hiện tại vào Heap
        min_heap.push(value);
        
        // Nếu kích thước Heap vượt quá K, loại bỏ phần tử nhỏ nhất
        // Phần tử nhỏ nhất trong Min-Heap luôn nằm ở gốc (min_heap.top())
        if (min_heap.size() > K_SIZE) {
            min_heap.pop();
        }
    }
    // Sau khi duyệt hết mảng, Min-Heap chỉ còn K phần tử lớn nhất
    // Phần tử nhỏ nhất trong nhóm này (tại gốc Heap) chính là phần tử lớn thứ k
    return min_heap.top();
}
