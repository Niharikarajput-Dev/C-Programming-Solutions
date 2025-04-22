//write a function to rpint the table 

#include<stdio.h>
void Table(int n);       //function declaration 

int main()
{
    int n;
    printf("enter a number : ");
    scanf("%d",&n);

    Table(n);          //function call // argument or actual parameter 
}

void Table(int n){
    for (int i =1; i<=10; i++) {                 //function defintion 
        printf("%d\n",n*i);                   
    }

}