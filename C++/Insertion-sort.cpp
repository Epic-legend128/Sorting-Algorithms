#include <iostream>
#include <vector>
using namespace std;

//insertion sort O(n^2) time notation but at the best cases it can reach O^n
void insertion(vector<int>& list, int limit) {
    for (int i = 1; i<limit; i++) {
        int j;
        int value = list[i];
        for (j = i-1; j>=0 && list[j]>value; j--) {
            swap(list[j+1], list[j]);
        }
    }
}

int main() {
    int size = 5;
    vector<int> nums(size, 0);
    cout << "Enter "<<size<<" numbers:\n";
    
    for (int i = 0; i < size; i++) {
        int current;
        cin >> current;
        nums.push_back(current);
    }
    
    insertion(nums, size);
    
    for (int i = 0; i<size; i++) {
        cout << nums[i]<<" ";
    }
    cout << "\n";
}
