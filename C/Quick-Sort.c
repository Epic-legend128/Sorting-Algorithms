#include <stdio.h>

//a function used in quicksort
int partition(int *ptr, int p, int r) {
    int q = p;
    for (int j = p; j<r; j++) {
        if (*(ptr+j) <= *(ptr+r)) {
            int temp = *(ptr+j);
            *(ptr+j) = *(ptr+q);
            *(ptr+q++) = temp;
        }
    }
    int temp = *(ptr+q);
    *(ptr+q) = *(ptr+r);
    *(ptr+r) = temp;
    return q;
}

//quicksort O(nlogn) time notation but at worst cases it can reach O(n^2), but it still is the best sorting algorithm
void quicksort(int *ptr, int p, int r) {
    if (p<r) {
        int q = partition(ptr, p, r);
        quicksort(ptr, p, q-1);
        quicksort(ptr, q+1, r);
        
    }
}


int main() {
    int size = 5;
    int nums[size];
    printf("Enter %d numbers:\n", size);
    
    for (int i = 0; i < size; i++) {
        int current;
        scanf("%d", &current);
        nums[i] = current;
    }
    
    quicksort(nums, 0, size-1);
    
    for (int i = 0; i<size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
