//print the following pattern
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1; i<5;i++) {
        for(j=1; j<6;j++) {
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}