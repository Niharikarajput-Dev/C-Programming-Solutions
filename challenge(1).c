
//Write a program that:

// Takes two numbers from the user: a starting number and an ending number.

// Prints all prime numbers between those two numbers (inclusive).
#include<stdio.h>

int main() {
    int i, num, start, end, isprime =1;
    printf("enter the start of range : ");
    scanf("%d",&start);
    printf("enter the end of range : ");
    scanf("%d",&end);
    
    printf("Prime numbers between the range %d and %d : \n", start,end);

   for(num = start ;num <= end; num++) {
    if(num <=1 ) {
        continue;
    }
    isprime = 1;
    
    for(i =2; i<= num/2; i++) {
        if(num %i == 0) {
            isprime = 0;
            break;
        
        }
       }
       if(isprime == 1) {
        printf("%d\n", num);
       }
   }
   return 0;
  
}