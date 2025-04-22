//print all the even numbers from 5 to 25 using for loop
#include<stdio.h>
int main()
{
    int i;
    for(i = 5; i<25; i++) {
        if(i%2==0) {
            printf("%d\n",i);
        }
    }
}