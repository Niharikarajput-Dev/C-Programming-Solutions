//program to count evem and odd in the array
#include<stdio.h>
int main()
{
    int i, n[5], size = 5; 
    int even = 0, odd = 0;

    // printf("How many numbers do you want to enter (max 100)? ");
    // scanf("%d", &size);  // User defines how many numbers

    printf("Enter the numbers :\n", size);
    for(i = 0; i < size; i++) {
        scanf("%d", &n[i]); // Taking input
    }

    for(i = 0; i < size; i++) {
        if(n[i] % 2 == 0){
            even++; // Counting evens
        } else {
            odd++; // Counting odds
        }
    }

    printf("Even numbers are: %d\n", even);
    printf("Odd numbers are: %d\n", odd);

    return 0;
}
