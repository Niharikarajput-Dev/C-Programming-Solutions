// Bubble Sort in Ascending Order
#include <stdio.h>
int main() {
    int i,j,n=10, num[10], temp;
    printf("Enter 10 numbers : \n");
    for(i=0; i< n ; i++) {
        scanf("%d", &num[i]);
    }

    for(i=0; i<n-1; i++) {
        for(j=0; j < n-1-i; j++ ){
            if(num[j]>num[j+1]){
                temp = num[j];
                num [j] = num[j+i];
                temp = num[j+i];
            }
        }
    }

    printf("sorted array in ascending order is: \n");
    for(i=0; i<n; i++){
        printf("%d ", num[i]);
    }
    return 0;
}
