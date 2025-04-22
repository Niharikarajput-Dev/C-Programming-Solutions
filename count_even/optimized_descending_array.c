//Sort an array in descending order and stop early if already sorted.
#include <stdio.h>
int main()
{
    int i, j, num[10], swapped, temp;
    printf("Enter 10 numbers:\n");
    for(i=0; i< 10; i++) {
        scanf("%d", &num[i]);
    }
    for(i=0; i<9; i++) {
        swapped = 0;
        for(j=0; j<10-i-1; j++) {
         if(num[j] < num[j+1]) {
            temp = num[j];
            num[j] = num[j+1];
            num[j+1] = temp;
            swapped = 1;

         }   
        }
        if(swapped == 0) {
            break;
        }

    }
    
    printf("descending elements are :\n");
    for(i=0; i<10; i++) {
        printf("%d ", num[i]);
    }
}