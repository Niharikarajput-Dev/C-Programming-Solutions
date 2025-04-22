//wap to Reverse a 1D Array
#include <stdio.h>
int main() {
    int i, num[10], temp, size = 10;
    printf("enter 10 numbers :\n");
    for(i=0; i<size; i++) {
        scanf("%d", &num[i]);
    }

    for(i=0; i< size/2 ; i++) {
        temp = num[i];
        num[i] = num[size - 1-i];
        num[size - 1- i] = temp;
    }
    printf("Reversed array is : \n");
    for(i=0; i<size; i++) {
        printf("%d  ", num[i]);
    }
    return 0;
}
 
