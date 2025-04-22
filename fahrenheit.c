//program to convert celsius into fahrenheit 
#include<stdio.h>
int main() 
{
    int c ;
    float fahrenheit;
    printf("enter the temperature in celsius : ");
    scanf("%d",&c);
    fahrenheit = (9.0/5.0 * c) + 32;
    printf("the temperature in fahrenheit is %.2f\n", fahrenheit);

    return 0;
}
// Program to convert Celsius into Fahrenheit
// #include <stdio.h>

// int main() {
//     int c;
//     float fahrenheit;

//     printf("Enter the temperature in Celsius: ");
//     scanf("%d", &c);

//     fahrenheit = (9.0 / 5.0 * c) + 32; // Use floating-point division

//     printf("The temperature in Fahrenheit: %.2f\n", fahrenheit); // Use %f to print float

//     return 0;
// }
