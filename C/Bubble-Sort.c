#include <stdio.h>
#include <stdlib.h>

//bubble sort O(n^2) time notation
void bubble(int *ptr, int limit) {
    for (int i = limit; i>0; i--) {
        for (int j = 0; j<i-1; j++) {
            if (*(ptr+j) > *(ptr+j+1)) {
                int temp = 0;
                temp = *(ptr+j+1);
                *(ptr+j+1) = *(ptr+j);
                *(ptr+j) = temp;
            }
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
    
    bubble(nums, size);
    
    printf("The numbers sorted in ascending order:\n");
    for (int i = 0; i<size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
