#include <sort/bubble_sort.h>
#include <iostream>

int main() {
    std::vector<int> arr = {
        2, 5, 1, 3, 4
    };

    std::vector<int> sorted_arr = bubble_sort(arr, false, true);
    
    for(auto i : sorted_arr) {
        std::cout << i;
    }
}
