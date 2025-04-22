// Write a program that:

// Takes a number from the user

// Checks if it’s even or odd

// If it’s even, print numbers from 2 to that number using a for loop

// If it’s odd, print numbers from 1 to that number using a while loop
#include <stdio.h>
int main() {
    int i, num;
    printf("enter a number :");
    scanf("%d",&num);

    if(num%2 == 0) {
        printf("number is even.\n");
        for(i = 2; i<=num; i+=2) {
            printf("%d\n",i);
        }

    } else {
        printf("number is odd.\n");

        i = 1;
        while(i<=num) {
            printf("%d\n",i);
            i+=2;

        }
        
    }
    printf("press Enter to exit...");
    getchar();
    getchar();
    return 0;

}






