#include <sort/bubble_sort.h>
#include <sort/quick_sort.h>
#include <iostream>

int main() {
    std::vector<int> arr = {
        2, 5, 1, 3, 4
    };

    std::vector<int> sorted_arr = quick_sort(arr);
    
    for(auto i : sorted_arr) {
        std::cout << i;
    }
}
