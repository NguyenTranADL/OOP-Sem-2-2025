#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <functional> // Cần thiết cho std::greater
#include <limits>     // Cần thiết cho std::numeric_limits

// Bao gồm file template Heap.tpp để có thể sử dụng lớp Heap<T>
// Trong môi trường kiểm tra, file này sẽ được biên dịch cùng với main.
#include "Heap.tpp" 

/**
 * @brief Hàm tìm phần tử lớn thứ k trong một vector.
 * @details Sử dụng Min-Heap (std::priority_queue với std::greater) để giữ k phần tử lớn nhất.
 */
int kth_largest(std::vector<int> values, int k) {
    
    // Xử lý trường hợp k không hợp lệ
    if (k <= 0 || k > values.size()) {
        // Trả về giá trị min nếu đầu vào không hợp lệ
        return std::numeric_limits<int>::min(); 
    }

    // Khai báo Min-Heap (priority_queue với comparator std::greater)
    // Heap này sẽ luôn lưu trữ K phần tử lớn nhất đã duyệt qua.
    std::priority_queue<int, std::vector<int>, std::greater<int>> min_heap;

    for (int value : values) {
        
        if (min_heap.size() < k) {
            // 1. Thêm thẳng k phần tử đầu tiên
            min_heap.push(value);
        } else {
            // 2. So sánh với phần tử nhỏ nhất trong k phần tử lớn nhất hiện tại (min_heap.top())
            if (value > min_heap.top()) {
                // Nếu giá trị hiện tại lớn hơn, loại bỏ phần tử nhỏ nhất (gốc)
                min_heap.pop();
                // và thêm giá trị mới vào
                min_heap.push(value);
            }
        }
    }

    // Phần tử nhỏ nhất trong Min-Heap kích thước k chính là phần tử lớn thứ k
    return min_heap.top();
}


int main() {
    std::cout << "=================================================\n";
    std::cout << "--- Kịch Bản Kiểm Tra Lớp Heap<T> (Min-Heap) ---\n";
    std::cout << "--- (Kiểm tra insert, remove, getMin) ---\n";
    std::cout << "=================================================\n";
    
    Heap<int> h;
    std::vector<int> test_data = {10, 5, 20, 1, 8, 3};
    
    // --- Test 1: insert() ---
    std::cout << "\n[1.1] Chèn các giá trị: 10, 5, 20, 1, 8, 3\n";
    for (int val : test_data) {
        std::cout << "-> Chèn " << val << ":\n";
        h.insert(val);
    }
    std::cout << "-> Nội dung Heap cuối cùng:\n";
    h.printHeap(); 
    // Min-Heap property: Gốc phải là 1 (Phần tử nhỏ nhất)

    // --- Test 2: getMin() ---
    std::cout << "\n[1.2] Phần tử nhỏ nhất hiện tại (getMin): " << h.getMin();
    std::cout << " (Dự kiến: 1)\n";

    // --- Test 3: remove() ---
    int val_to_remove = 20;
    std::cout << "\n[1.3] Xóa giá trị lớn: " << val_to_remove << "\n";
    h.remove(val_to_remove);
    std::cout << "-> Nội dung Heap sau khi xóa 20:\n";
    h.printHeap(); 

    val_to_remove = 5;
    std::cout << "\n[1.4] Xóa giá trị trung gian: " << val_to_remove << "\n";
    h.remove(val_to_remove);
    std::cout << "-> Nội dung Heap sau khi xóa 5:\n";
    h.printHeap(); 
    
    // --- Test 4: popTop() ---
    std::cout << "\n[1.5] Lấy và xóa phần tử nhỏ nhất (popTop): " << h.popTop();
    std::cout << " (Dự kiến: 1)\n";
    std::cout << "-> Phần tử nhỏ nhất mới: " << h.getMin() << "\n";
    std::cout << "-> Nội dung Heap sau khi pop:\n";
    h.printHeap();


    std::cout << "\n=========================================================\n";
    std::cout << "--- Kịch Bản Kiểm Tra Hàm kth_largest ---\n";
    std::cout << "=========================================================\n";
    
    std::vector<int> k_test_values = {3, 7, 4, 9, 2, 6, 8, 1, 5};
    std::cout << "Mảng đầu vào: [3, 7, 4, 9, 2, 6, 8, 1, 5]\n";
    std::cout << "Mảng đã sắp xếp (giảm dần): 9, 8, 7, 6, 5, 4, 3, 2, 1\n";
    
    // Test k=1 (Lớn nhất) -> 9
    int k1 = 1;
    int result1 = kth_largest(k_test_values, k1);
    std::cout << "\n[2.1] Phần tử lớn thứ " << k1 << " là: " << result1 << " (Dự kiến: 9)\n";

    // Test k=3 (Lớn thứ ba) -> 7
    int k3 = 3;
    int result3 = kth_largest(k_test_values, k3);
    std::cout << "[2.2] Phần tử lớn thứ " << k3 << " là: " << result3 << " (Dự kiến: 7)\n";

    // Test k=5 (Lớn thứ năm) -> 5
    int k5 = 5;
    int result5 = kth_largest(k_test_values, k5);
    std::cout << "[2.3] Phần tử lớn thứ " << k5 << " là: " << result5 << " (Dự kiến: 5)\n";
    
    return 0;
}
