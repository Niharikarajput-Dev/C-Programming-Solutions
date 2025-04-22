// Find the element with the highest frequency
#include <stdio.h>
int main()
{
    int i, j, num[10], freq[10], count;
    printf("Enter 10 elements : ");
    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
        freq[i] = -1;
    }

    for(i=0; i<10; i++) {
        count = 1;
        if(freq[i]!= 0) {
            for(j = i+1; j<10; j++) {
                if(num[i] == num[j]) {
                    count ++;
                    freq[j] = 0;
                }
            }
            freq[i] = count ;
        }
    }
    printf("frequences of elements are : \n");
    for(i=0; i<10; i++) {
        if(freq[i]!=0) {
            printf("%d appears: %d times\n", num[i], freq[i]);
        }
    }

   int maxfreq = freq[0];
   int mostfrequent = num[0];
   for(i=0; i<10; i++) {
    if(freq[i] > maxfreq) {
        maxfreq = freq[i];
        mostfrequent = num[i];
    }
   }
   printf("the most frequent number is %d which appears %d times.\n", mostfrequent, maxfreq);

    return 0;

}
