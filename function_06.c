//function to calculate area of square, circle and rectangle
#include<stdio.h>
#include<math.h>

float square_area(float side);
float circle_area(float radius);
float rectangle_area(float a, float b);

int main() {
    float side = 4;
    printf("area of square is %f\n",square_area(side));
    float radius = 6;
    printf("area of circle is %f\n",circle_area( radius));
    float a = 7 ;
    float b = 8;
    printf("area of rectamgle is %f\n", rectangle_area(a,b));

}
float square_area(float side) {
    return side * side;
}
float circle_area(float radius) {
    return 3.14 *radius *radius;
}
float rectangle_area(float a, float b) {
    return a*b;
}