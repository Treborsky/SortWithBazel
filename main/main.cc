#include <sort/bubble_sort.h>
#include <sort/quick_sort.h>
#include <iostream>

int main() {
    std::vector<int> arr = {
        2, 5, 1, 3, 4
    };

    std::cout << "Input array: [";
    for(auto elem : arr) {
        std::cout << elem << " ";
    }
    std::cout << "]" << std::endl;

    quicksort(arr, 0, arr.size() - 1);

    std::cout << "Output array: [";
    for(auto elem : arr) {
        std::cout << elem;
    }
    std::cout << "]" << std::endl;
}
