#include "bubble_sort.h"

std::vector<int> bubble_sort (std::vector<int>& unsorted) {
    int tmp;
    for(int j = 1; j < unsorted.size(); ++j) {
        for (int i = 1; i < unsorted.size(); ++i) {
            if (unsorted[i - 1] > unsorted[i]) {
                tmp = unsorted[i - 1];
                unsorted[i - 1] = unsorted[i];
                unsorted[i] = tmp;  
            }
        }
    }
    return unsorted;
}
