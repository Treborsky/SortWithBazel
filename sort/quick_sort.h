#ifndef QUICK_SORT_H
#define QUICK_SORT_H

#include <vector>

void quicksort(std::vector<int>& arr, unsigned lo, unsigned hi);
unsigned partition(std::vector<int>& arr, unsigned lo, unsigned hi);
inline void int_swap(int* a, int* b);

#endif // QUICK_SORT_H
