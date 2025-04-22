//print all the even numbers from 6 to 25 using do while 
#include<stdio.h>
int main() 
{
    int a = 6;
    do{
        if(a%2==0){
            printf("%d\n",a);

        }
        
        a++;
    }
    while(a<25);
    
}