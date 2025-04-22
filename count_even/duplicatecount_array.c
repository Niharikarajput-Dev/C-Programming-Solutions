//Count how many duplicate elements are present (i.e., how many numbers appear more than once — without double-counting).
#include <stdio.h>
int main()
{
    int i, j, num[10], freq[10], count , dupcount = 0;
    printf("Enter 10 elements :\n");
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
                    freq[j] = 0;
                }
            }
            freq[i] =  count;
          
        }
    }
    
    for(i=0; i<10; i++) {
        if(freq[i]> 1) {
            printf("%d is a duplicate element.\n", num[i]);
            dupcount ++;
            
        }
     
    }
    printf("Total number of duplicate elements are : %d\n", dupcount);
    return 0;

}