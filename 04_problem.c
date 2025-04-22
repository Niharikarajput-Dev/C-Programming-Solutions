//program to find the greater of two numbers using condiitional operator 
#include<stdio.h>
int main()
{
    int x ,a ,b;
    printf("enter two numbers : ");
    scanf("%d%d",&a,&b);
    x = (a>b) ? printf("%d is greater",a) : printf("%d is greater",b);
}