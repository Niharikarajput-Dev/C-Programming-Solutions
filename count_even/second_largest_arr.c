// Find the Second Largest Number in an Array
#include <stdio.h>
int main() {
    int num[10], i;
    int first, second;

    printf("Enter 10 numbers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    // Initialize first and second with the first two elements in sorted order
    if (num[0] > num[1]) {
        first = num[0];
        second = num[1];
    } else {
        first = num[1];
        second = num[0];
    }

    for(i = 2; i < 10; i++) {
        if(num[i] > first) {
            second = first;
            first = num[i];
        } else if(num[i] > second && num[i] != first) {
            second = num[i];
        }
    }

    if(first == second) {
        printf("All elements are equal. No second largest number.\n");
    } else {
        printf("The second largest number is: %d\n", second);
    }

    return 0;
}
