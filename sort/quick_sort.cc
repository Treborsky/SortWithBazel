#include "quick_sort.h"

void quicksort(std::vector<int>& arr, unsigned lo, unsigned hi) {

    if (lo >= 0 && hi >= 0 && lo <= hi) {
        unsigned pivot_idx = partition(arr, lo, hi);

        // sort left and right (inclusive) to the pivot
        quicksort(arr, lo, pivot_idx - 1);  // left to the pivot
        quicksort(arr, pivot_idx, hi);      // right to the pivot, including the pivot
    }   
}

unsigned partition(std::vector<int>& arr, unsigned lo, unsigned hi) {
    unsigned pivot = arr[hi];
    unsigned i = lo - 1; // ??? TODO: see why

    for(unsigned j = lo; j < hi; ++j) {
        if (arr[j] <= pivot) {
            i += 1;
            int_swap(&arr[j], &arr[i]);
        }
    }
    return i;
}

inline void int_swap(int* a, int* b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
}
