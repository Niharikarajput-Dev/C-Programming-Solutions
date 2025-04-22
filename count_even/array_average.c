//program to find the average of array
#include <stdio.h>
int main()
{
    int i, num[5], sum = 0;
    float average;
    printf("enter 5 array elements .\n");
    for(i=0; i<5; i++) {
        scanf("%d", &num[i]);
    }

    for(i=0; i<5; i++) {
        sum = sum + num[i];
        
    }

    average = (float)sum / 5;

    printf("Average is : %f\n", average);
    return 0;
}
