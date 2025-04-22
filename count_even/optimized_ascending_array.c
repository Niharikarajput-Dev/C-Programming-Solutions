//Sort an array in ascending order and stop early if already sorted. 
#include <stdio.h>

int main() {
    int i, num[10], j, temp, swapped ;

    printf("Enter 10 elements:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &num[i]);
    }

    for(i = 0; i < 9; i++) {
        swapped = 0;
        for(j = 0; j < 9 - i; j++) {
            if(num[j] > num[j + 1]) {
                temp = num[j];
                num[j] = num[j + 1];
                num[j + 1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0) {
            break;
        }
    }
    

    printf("Ascending order is:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", num[i]);
    }

    return 0;
}
