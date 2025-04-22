//write a function t convert celsius to fahrenheit
#include<stdio.h>

float convertTemp(float celsius);

int main() 
{
    float celsius, far;
    printf("enter temperature in celsius : ");
    scanf("%f", &celsius);

    far = convertTemp(celsius);

    printf("temperature in fahrenheit is : %f\n", far);

    return 0;

}

float convertTemp(float celsius) {
    float far = celsius * (9.0 / 5.0) +32;

    return far;
}