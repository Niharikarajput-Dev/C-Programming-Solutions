//program to calculate area of parallelogram 
#include<stdio.h>

int main()
{
    int b,h,area;
    printf("enter base and height of parallelogram : ");
    scanf("%d%d",&b,&h);
    area = b*h;
    printf("area of parallelogram is: %d",area);
}