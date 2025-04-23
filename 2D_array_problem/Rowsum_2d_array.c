//wap to find the Sum of Each Row
#include <stdio.h>
int main()
{
    int i, j, matrix[3][3];
    printf("Enter elements of 3*3 matrix : \n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("enter element at [%d][%d] :", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    
    for(i=0; i<3; i++) {
        int row_sum = 0;
        for(j=0 ; j<3; j++) {
            row_sum = row_sum + matrix[i][j];
        }
        printf("sum of row %d is : %d\n",i, row_sum);
    }
   
    return 0;
}