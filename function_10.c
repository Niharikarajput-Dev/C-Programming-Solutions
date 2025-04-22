//function to convert celsius to fahrenheit 
#include<stdio.h>
float convertTemp(float celsius);

int main() {
    float far = convertTemp(2);
    printf("far : %f",far);
}

float convertTemp(float celsius) {
    float far = celsius * (9.0/5.0) + 32;
    return far;

}