//Given an array of 10 integers, remove all duplicate elements and print the array with only unique elements.
#include <stdio.h>
int main()
{
    int i, j, num[10], freq[10], count;
    printf("Enter 10 elements.\n");
    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
        freq[i] = -1;
    }
    for(i=0; i<10; i++) {
        count = 1;
        if(freq[i]!=0) {
            for(j=i+1; j<10; j++) {
                if(num[i]==num[j]){
                    count++;
                    freq[j] =0;
                }
          
            }
            freq[i] = count;
        }
    }
    for(i=0; i<10; i++) {
        if(freq[i]== 1) {
            printf("%d is a unique element\n", num[i]);
        }
    }
    return 0;

}