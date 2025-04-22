//print the given pattern
#include<stdio.h>
int main()
{
    int i,j;
    for(i = 1; i<=5;i++){
        for(j=1; j<=i;j++) {
            printf("*",i);
        }
        printf("\n");
    }
    return 0;
}