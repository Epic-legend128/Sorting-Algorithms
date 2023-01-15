#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


//a function used in mergesort
void merge(vector<int>& list, int p, int q, int r) {
    vector<int> lowHalf;
    vector<int> highHalf;
    int k = p;
    int i;
    int j;
    for (i = 0; k<=q; k++) {
        lowHalf.push_back(list[k]);
    }
    
    for (j = 0; k<=r; k++) {
        highHalf.push_back(list[k]);
    }
    
    k = p;
    i = 0;
    j = 0;
    
    while (i < lowHalf.size() && j < highHalf.size()) {
        if (lowHalf[i] < highHalf[j]) {
            list[k] = lowHalf[i++];
        }
        else {
            list[k] = highHalf[j++];
        }
        k++;
    }
    
    while (i < lowHalf.size()) {
        list[k++] = lowHalf[i++];
    }
    
    while (j < highHalf.size()) {
        list[k++] = highHalf[j++];
    }
}

//mergesort O(nlogn) time notation
void mergesort(vector<int>& list, int p, int r) {
    if (p < r) {
        int q = floor((p+r)/2);
        mergesort(list, p, q);
        mergesort(list, q+1, r);
        merge(list, p, q, r);
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
    
    mergesort(nums, 0, size-1);
    
    for (int i = 0; i<size; i++) {
        cout << nums[i]<<" ";
    }
    cout << "\n";
}
