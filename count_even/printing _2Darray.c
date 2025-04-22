//program to printing 2d array
#include <stdio.h>
int main()
{
    int matrix[3][3]; // 3rows and 3 columns.
    int i, j;
    printf("Enter elements for 3*3 matrix :\n");

    for(i=0; i<3; i++) {
        for(j=0; j<3;j++) {
            printf("Enter element at [%d][%d] :", i,j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("\nmatrix is :\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d\t", matrix[i][j]);    //\t = tab space

        }
    }
    return 0;
}