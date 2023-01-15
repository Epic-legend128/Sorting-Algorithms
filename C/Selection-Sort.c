#include <stdio.h>
#include <stdlib.h>

//selection sort O(n^2) time notation
void selection(int *ptr, int limit) {
    int mn;
    for (int i = 0; i<limit; i++) {
        mn = i;
        for (int j = mn+1; j<limit; j++) {
            if (*(ptr+j) < *(ptr+mn)) {
                mn = j;
            }
        }
        int temp = *(ptr+i);
        *(ptr+i) = *(ptr+mn);
        *(ptr+mn) = temp;
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
    
    selection(nums, size);
    
    printf("The numbers sorted in ascending order:\n");
    for (int i = 0; i<size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
