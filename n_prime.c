//wap to Print the first n prime numbers.
#include<stdio.h>
int main() {
    int i, num = 2, n, count = 0, isprime ;
    printf("Enter how many prime numbers to print  : ");
    scanf("%d", &n);

    printf("the first %d prime numbers are : \n", n);

    while(count < n) {
        isprime = 1;

        for(i = 2; i<= num/2; i++) {
            if(num%i == 0) {
                isprime = 0;
                break;
            }
    
        }
    
        if(isprime == 1) {
            printf("%d\n", num);
            count++;
        }

        num ++;
    }
 


}


    
