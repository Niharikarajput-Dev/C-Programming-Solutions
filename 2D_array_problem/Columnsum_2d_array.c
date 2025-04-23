//program to sum each column of 2d array.
#include <stdio.h>
int main()
{
    int i, j, matrix[3][3];
    printf("Enter elements of 3*3 matrix :\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Enter element at [%d][%d] :", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    for(j=0; j<3; j++) {
        int column_sum = 0;
        for(i=0; i<3; i++) {
            column_sum = column_sum + matrix[i][j];
        }
        printf("Sum of column %d is :%d\n", j, column_sum);
    }
    return 0;
}