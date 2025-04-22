//program to reverse the elements of an array
#include<stdio.h>
int main() {
    int i, num[5], temp, size;
    size = 5;

    printf("Enter 5 elements: \n");
    for(i = 0; i < size; i++) {
        scanf("%d", &num[i]);
    }

    for(i = 0; i < size / 2; i++) {
        temp = num[i];
        num[i] = num[size - 1 - i];
        num[size - 1 - i] = temp;
    }

    printf("Reversed array is: \n");
    for(i = 0; i < size; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}

    