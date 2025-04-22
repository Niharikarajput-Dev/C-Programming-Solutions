//wap to count even and odd elements in ann array.

#include <stdio.h>
int main()
{
    int i, num[5], even_count = 0 , odd_count = 0;
    printf("Enter the elements of array :\n");
    for(i=0; i<5; i++) {
        scanf("%d", &num[i]);
    }

    for(i=0; i<5; i++) {
        if(num[i] %2 == 0 ) {
            even_count ++;
        }
        else {
            odd_count ++;
        }
    }
    //print evem numbers.
    printf("even numbers are :\n");
    for(i=0; i<5; i++) {
        if(num[i] %2 == 0) 
            printf("%d ", num[i]);
    }
    printf("total even numbers : %d\n", even_count);
   //print odd numbers.
   printf("odd numbers are :\n");
   for(i=0; i<5; i++) {
    if(num[i]%2 != 0) 
    printf("%d ", num[i] );
    }

    printf("total odd numbers : %d\n", odd_count);

    return 0;
}