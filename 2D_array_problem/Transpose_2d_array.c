//wap to transpose of 2d array matrix
#include <stdio.h>
int main()
{
    int i, j, matrix[3][3], transpose[3][3];
    printf("Enter elements of 3*3 matrix :\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("Enter element at [%d][%d] :", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
    printf("Transpose is : \n");
    for(i=0; i<3; i++) {
        for(j=0 ; j<3; j++) {
            printf(" %d\t", transpose[i][j]);
        }
        printf("\n");

    }
    return 0;
  
}