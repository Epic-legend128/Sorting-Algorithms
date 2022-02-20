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
