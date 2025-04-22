//program to find the second largest frequency of number in an array
#include <stdio.h>
int main()
{
    int i, j, num[10], freq[10], count;
    
    printf("Enter 10 elements :\n");
    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
        freq[i] = -1;          //i haven't counted this number yet.
    }
    for(i=0; i<10; i++) {
        count = 1;
        if(freq[i]!=0) {
            for(j= i+1; j<10; j++) {
                if(num[i]==num[j]) {
                    count++;
                    freq[j] = 0;
                }
            }
            freq[i] = count;
        }
    }
    int maxfreq = freq[0];
    for(i=0; i<10; i++) {
        if(freq[i]!=0 && freq[i]>maxfreq) {
            maxfreq = freq[i];
        }
    }
    int secondmaxfreq = -1;
    for(i=0; i<10;i++) {
        if(freq[i]<maxfreq && freq[i] > secondmaxfreq) {
            secondmaxfreq = freq[i];
        }
    }
    int found =0;
    for(i=0; i<10; i++) {
        if(freq[i] == secondmaxfreq) {
            printf("the second maximum freq is %d (appears %d times).\n", num[i],secondmaxfreq);
            found = 1;
        }
    }
    if(!found) {
        printf("There is no second maximum frequency element.\n");
    }
    return 0;
 

    
}

