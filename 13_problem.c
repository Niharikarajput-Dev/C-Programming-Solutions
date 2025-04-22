//even  numbers from 5 to 25 using while loop
#include<stdio.h>
int main()
{
    int a = 5 ;
    while(a<25) {
        if(a%2==0) {
            printf("%d\n",a);
        }
        a++;
       
    }
    return 0;
    
}
// #include <stdio.h>

// int main() {
//     int a = 5;
//     while (a <= 25) { // Include 25 if you want to check it as well
//         if (a % 2 == 0) {
//             printf("%d\n", a);
//         }
//         a++; // Increment `a` in every iteration to avoid an infinite loop
//     }
//     return 0;
// }

