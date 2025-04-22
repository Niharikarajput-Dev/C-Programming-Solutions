//print the sum of array
#include<stdio.h>
int main()
{
    int num[5], i, sum = 0;
    printf("Enter the 5 elements : \n");
    for(i=0; i<5; i++) {
        scanf("%d", &num[i]);

    }

    for(i =0; i<5; i++){
        sum = sum + num[i];
        
    }
    printf("sum is : %d", sum);
    
    return 0;
}
