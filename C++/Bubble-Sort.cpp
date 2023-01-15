#include <iostream>
#include <vector>
using namespace std;

//bubble sort O(n^2) time notation
void bubble(vector<int>& list, int limit) {
    for (int i = limit; i>0; i--) {
        for (int j = 0; j<i-1; j++) {
            if (list[j] > list[j+1]) {
                swap(list[j], list[j+1]);
            }
        }
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
    
    bubble(nums, size);
    
    for (int i = 0; i<size; i++) {
        cout << nums[i]<<" ";
    }
    cout << "\n";
}
