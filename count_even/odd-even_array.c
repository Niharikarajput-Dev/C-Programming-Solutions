// Count Even and Odd Numbers in a 1D Array
#include <stdio.h>
int main() {
    int i, num[10], size = 10;
    int even = 0, odd = 0;
    printf("Enter 10 numbers :\n");
    for(i=0; i<size; i++) {
        scanf("%d", &num[i]);
    }

    for(i=0; i<size; i++){
        if(num[i] %2==0) {
            even++;           //counting even
        }
        else{
            odd++;           //counting odd
        }
    }

    printf("Even numbers are : %d\n", even);
    printf("odd numbers are : %d\n", odd);
}