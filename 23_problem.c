//print 10 to 5 except 8 usinng continue 
#include<stdio.h>
int main()
{
    int i= 10;
    while(i>=5) {
        if(i==8) {
            i--;
            continue;
            
        }
        printf("%d\n",i);
        i--;
    }
    
} 
