//to print all the prime numbers in a range
#include <stdio.h>

int main() {
    int num, i, j, isPrime;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 2) {
        printf("There are no prime numbers in this range.\n");
    } else {
        printf("Prime numbers from 1 to %d:\n", num);

        for (i = 2; i <= num; i++) {
            isPrime = 1; // assume i is prime

            for (j = 2; j * j <= i; j++) {
                if (i % j == 0) {
                    isPrime = 0; // not prime
                    break;
                }
            }

            if (isPrime) {
                printf("%d\n ", i);
            }
        }

        printf("\nDone listing primes.\n");
    }

    return 0;
}
