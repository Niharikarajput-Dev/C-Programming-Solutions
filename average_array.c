//find the average of the array
#include <stdio.h>
int main()
{
    int i, num[10], sum = 0;
    float average;
    printf("Enter 10 elements : \n");
    for(i=0; i<10; i++){
        scanf("%d", &num[i]);
    }

    for(i=0; i<10; i++) {
        sum = sum + num[i];

    }
    average = sum/10;

    printf("sum is : %d\n", sum);
    printf("Average is : %.2f\n", average);
    return 0;
}