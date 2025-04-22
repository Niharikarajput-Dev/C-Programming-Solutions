//program to count prime numbers in a range
#include <stdio.h>
int main()
{
    int i, num, start, end, count = 0, isprime = 1;
    printf("Enter the start of range :");
    scanf("%d", &start);
    printf("Enter the end of range :");
    scanf("%d",&end);

    printf(" Prime numbers from %d to %d are : \n", start, end);

    for(num = start; num <= end; num++) {
        if(num <= 1){
            continue;
        }
        isprime =1;

        for(i = 2; i <= num/2; i++){
            if(num%i == 0){
                isprime = 0;
            break;
            }
        }
        if(isprime == 1){
            printf("%d\n", num);
            count++;
        }

    }
    printf("total prime numbers from the range %d to %d are : %d.\n", start, end, count);
    return 0;

}