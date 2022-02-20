#include <iostream>
#include <vector>

//a function used in quicksort
int partition(vector<int>& list, int p, int r) {
    int q = p;
    for (int j = p; j<r; j++) {
        if (list[j] <= list[r]) {
            swap(list[j], list[q++]);
        }
    }
    swap(list[q], list[r]);
    return q;
}

//quicksort O(nlogn) time notation but at worst cases it can reach O(n^2), but it still is the best sorting algorithm
void quicksort(vector<int>& list, int p, int r) {
    if (p<r) {
        int q = partition(list, p, r);
        quicksort(list, p, q-1);
        quicksort(list, q+1, r);
        
    }
}
