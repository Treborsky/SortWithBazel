#include "bubble_sort.h"

template<typename T>
std::vector<T> bubble_sort (std::vector<T> unsorted, bool ascending, bool inplace) {
    int swapped = 0;

    // ascending for now
    if (inplace) {
        T tmp;
        while (!swapped) {
            swapped = 0;
            for (int i = 1; i < unsorted.size(); ++i) {
                if (unsorted[i - 1] > unsorted[i]) {
                    tmp = unsorted[i - 1];
                    unsorted[i - 1] = unsorted[i];
                    unsorted[i] = tmp;  
                }
                swapped = 1;
            }
        }
        return unsorted;
    }
}
