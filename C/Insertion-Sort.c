#include <stdlib.h>
#include <stdio.h>

//insertion sort O(n^2) time notation but at the best cases it can reach O^n
void insertion(int *ptr, int limit) {
    for (int i = 1; i<limit; i++) {
        int j;
        int value = *(ptr+i);
        for (j = i-1; j>=0 && *(ptr+j)>value; j--) {
            int temp = *(ptr+j+1);
            *(ptr+j+1) = *(ptr+j);
            *(ptr+j) = temp;
        }
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
    
    insertion(nums, size);
    
    printf("The numbers sorted in ascending order:\n");
    for (int i = 0; i<size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
