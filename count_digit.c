//program to count the digit of a number
#include<stdio.h>
int main() {
    int i, num, count = 0;
    printf("Enter a number :");
    scanf("%d", &num);

    if(num == 0) {
        count = 1;
    }
    else {
        while(num != 0){
            num = num/10;
            count++;
        }
    }
    printf("total  number of digits : %d\n", count);
    return 0;
}