//write a function to sum two integers

#include<stdio.h>
int sum(int a , int b);  //function declaration

int main() {
    int a,b,s;
    
    printf("enter two numbers :");
    scanf("%d%d",&a,&b);
    s = sum(a,b);                       //function call
    printf("sum is %d",s);


}

int sum(int a, int b) {                   //function definition
    return a+b;
}