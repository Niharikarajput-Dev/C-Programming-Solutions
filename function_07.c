//write a function to find even or odd 
#include<stdio.h>
int num(int a);

int main() 
{
    int a ;
    printf("enter a nummber : ");
    scanf("%d",&a);

    if(a%2==0) {
        printf("number is evem");
    }
    else {
        printf("number is odd");
    }

    
}

int  num(int a) {
    printf("number is even");
}
