//program to check whether the number is greater than 100 and less than 500
#include<stdio.h>
int main ()
{
    int x, num;
    printf("enter a number : ");
    scanf("%d",&num);
x = (num>100 && num<500) ? printf("number is between 100 and 500"): printf("number is not between 100 and 500");
    // if(num > 100 && num < 500) {
    //     printf("the number is greater than 100 and less than 500 : %d",num);
    // }
    // else {
    //     printf("the number exceeds the requirement");
    // }
    

}