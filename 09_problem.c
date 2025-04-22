//check whether the number entered by user is divisible by both 7 and 9
#include<stdio.h>
int main()
{
    int a ;
    printf("enter a number :");
    scanf("%d",&a);
    if(a%7==0 && a%9==0) {
        printf("the number is divisible by both 7 and 9");
    }
    else{
        printf("the number is not divisible by 7 and 9");
    }
    
    
}
