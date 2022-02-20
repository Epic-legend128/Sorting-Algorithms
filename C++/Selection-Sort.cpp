#include <iostream>
#include <vector>
using namespace std;

//selection sort O(n^2) time notation
void selection(vector<int>& list, int limit) {
    int mx = 0;
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

