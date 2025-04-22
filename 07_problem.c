//program to convert uppercase into lowercase character 
#include<stdio.h>
#include<ctype.h>
int main()
{
    char c ,lc;
    printf("enter a character in uppercase : ");
    scanf("%c",&c);
    lc = tolower(c);
    printf("the lowercase of  %c is %c ",c,lc);

    
}
