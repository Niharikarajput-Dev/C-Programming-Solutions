// wap to find the second smallest number in the array.
#include<stdio.h>
int main()
{
    int num[10], i;
    int first, second;
    printf("Enter 10 numbers :\n");
    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
    }
    if(num[0] < num[1]) {
        first = num[0];
        second = num[1];
    }
    else {
        first = num[1];
        second = num[0];
    }
    for(i=2; i<10; i++) {
        if(num[i] < first) {
            second = first;
            first = num[i];

        }
        else if(num[i] < second && num[i]!= first) {
            second = num[i];
        }

    }
    if(first == second) {
        printf("all numbers might be same. there is not second smallest.\n");
    }
    else{
        printf("the second smallest is %d\n", second);

    }
    return 0;

    
}