//sorting an array in descending order.
#include <stdio.h>
int main()
{
    int i, num[10], j, temp;
    printf("enter 10 elements :\n");
    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
    }
    for(i=0; i<9; i++) {
        for(j=0; j< 10-i-1; j++) {
            if(num[j] < num[j+1]) {
                temp = num[j];
                num[j] = num[j+1];
                num[j+1] = temp;
            }
        }
    }
    printf("descending order is :\n");
    for(i=0; i<10; i++) {
        printf("%d ", num[i]);
    }
}
