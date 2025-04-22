//Find the element with the lowest (non-zero) frequency.
//In other words, among all elements that appear at least once, find the one that appears least number of times.
#include <stdio.h>
int main()
{
    int i, j, num[10], freq[10], count;
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
    int minfreq = 9999;  // some large number
    for(i=0; i<10; i++) {
        if(freq[i]!=0 && freq[i]< minfreq) {
            minfreq = freq[i];
        }
    }

    for(i=0; i<10; i++) {
        if(freq[i]==minfreq) {
            printf("%d has the lowest frequency (%d times)\n", num[i], minfreq);
            
        }
    }
    return 0;


}