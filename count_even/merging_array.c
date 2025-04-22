//wap to merge two arrays .
#include <stdio.h>
int main() {
    int i, arr1[5], arr2[5], merged[10];
    printf("enter the 5 elements of array 1 :\n");
    for(i=0; i<5; i++) {
        scanf("%d", &arr1[i]);
    }
    printf("enter the 5 elements of array 2:\n");
    for(i=0; i<5; i++) {
        scanf("%d", &arr2[i]);
    }
    
    for(i=0; i<5; i++) {
        merged[i] = arr1[i];
        merged[i+5] = arr2[i];
    }

    printf("Merged array is :\n");
    for(i=0; i<10; i++) {
        printf("%d ", merged[i]);
    }
    return 0;

   
}