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
