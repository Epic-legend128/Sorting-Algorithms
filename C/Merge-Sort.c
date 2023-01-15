#include <stdio.h>

//a function used in mergesort
void merge(int *ptr, int p, int q, int r) {
    int lowSize = q-p+1;
    int highSize = r-q;
    int lowHalf[lowSize];
    int highHalf[highSize];

    int k = p;
    int i;
    int j;

    for (i = p; i<=q; i++) {
        lowHalf[i-p] = *(ptr+i);
    }
    
    for (j = q+1; j<=r; j++) {
        highHalf[j-q-1] = *(ptr+j);
    }
    
    k = p;
    i = 0;
    j = 0;
    
    while (i < lowSize && j < highSize) {
        if (lowHalf[i] < highHalf[j]) {
            *(ptr+k) = lowHalf[i++];
        }
        else {
            *(ptr+k) = highHalf[j++];
        }
        k++;
    }
    
    while (i < lowSize) {
        *(ptr+k++) = lowHalf[i++];
    }
    
    while (j < highSize) {
        *(ptr+k++) = highHalf[j++];
    }
}

//mergesort O(nlogn) time notation
void mergesort(int *ptr, int p, int r) {
    if (p < r) {
        int q = (int) ((p+r)/2);
        mergesort(ptr, p, q);
        mergesort(ptr, q+1, r);
        merge(ptr, p, q, r);
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
    
    mergesort(nums, 0, size-1);
    
    printf("The numbers sorted in ascending order:\n");
    for (int i = 0; i<size; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");
}
