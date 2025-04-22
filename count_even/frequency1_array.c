//wap to Find all the elements that appear exactly once (i.e., frequency = 1).
#include <stdio.h>
int main()
{
    int i, j, freq[10], num[10], count;
    printf("Enter 10 elements :\n");
    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
        freq[i] = -1;
    }
    for(i=0; i<10; i++) {
        count = 1;
        if(freq[i]!=0) {
            for(j=i+1; j<10; j++) {
                if(num[i]==num[j]) {
                    count++;
                    freq[j] = 0;
                }
            }
            freq[i] = count;
        }
    }
    for(i=0; i<10; i++) {
        if(freq[i]==1) {
            printf("%d appears exactly once.\n", num[i]);
             
        }
    }

    return 0;
}