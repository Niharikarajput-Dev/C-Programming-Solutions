//inputing 2d array 
#include <stdio.h>
int main() {
    int i, j, matrix[3][3];
    printf("enter the elements f=of 3*3 matrix :\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("enter elements at[%d][%d] :",i,j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("the matrix is :\n");
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
   
    return 0;

}