//program to find sum of all the elements of 2d array
#include <stdio.h>
int main() {
    int i, j, matrix[3][3];
    printf("enter elements of 3*3 matrix :\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Enter element at [%d][%d]", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    int sum = 0;
    for(i = 0; i<3; i++) {
        for(j=0; j<3; j++) {
            sum = sum + matrix[i][j];
        }
    }

    printf("sum is : %d\n", sum);
    return 0;


}