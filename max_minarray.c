//write an array to find maximum and minimum
#include<stdio.h>
int main() 
{
    int i, num[10];
    int max, min;

    printf("enter 10 elements : \n");
    for(i=0; i<10; i++){
        scanf("%d", &num[i]);
    }

    max = num[0];
    min = num[0];

    for(i=0; i<10; i++) {
        if(num[i] > max) {
            max = num[i];
        }
        if(num[i] < min) {
            min = num[i];
        }
        

    }
    printf("maximum number is : %d\n", max);

    printf("minimum number is : %d\n", min);

    return 0;


}