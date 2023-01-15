#include <iostream>
#include <vector>
using namespace std;

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


int main() {
    int size = 5;
    vector<int> nums;
    nums.reserve(size);
    cout << "Enter "<<size<<" numbers:\n";
    
    for (int i = 0; i < size; i++) {
        int current;
        cin >> current;
        nums.push_back(current);
    }
    
    quicksort(nums, 0, size-1);
    
    for (int i = 0; i<size; i++) {
        cout << nums[i]<<" ";
    }
    cout << "\n";
}
