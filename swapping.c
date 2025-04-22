//program to swap two numbers using third temporary  variable 
#include<stdio.h>
void main() {
    int a,b,temp;
    printf("enter the numbers to swap :");
    scanf("%d%d",&a,&b);
    
    temp = a;
    a = b;
    b = temp;
    printf("numbers after swapping %d\n%d\n", a,b);
}
