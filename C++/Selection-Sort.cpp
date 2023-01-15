#include <iostream>
#include <vector>
using namespace std;

//selection sort O(n^2) time notation
void selection(vector<int>& list, int limit) {
    int mn;
    for (int i = 0; i<limit; i++) {
        mn = i;
        for (int j = mn+1; j<limit; j++) {
            if (list[j] < list[mn]) {
                mn = j;
            }
        }
        swap(list[i], list[mn]);
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
    
    selection(nums, size);
    
    for (int i = 0; i<size; i++) {
        cout << nums[i]<<" ";
    }
    cout << "\n";
}
