//write a function to calc percentage of student from marks in science, maths and sanskrit.

#include<stdio.h>
float calcPercentage(int science, int maths, int sanskrit);

int main() {
    int science, maths, sanskrit, marks;
    float percentage;

    printf("enter marks of science : ");
    scanf("%d",&science);
    printf("enter marks of maths : ");
    scanf("%d",&maths);
    printf("enter marks of sanskrit : ");
    scanf("%d",&sanskrit);

    percentage = calcPercentage(science ,maths, sanskrit);

    printf("percentage is : %.2f\n", percentage);

}

float calcPercentage(int science, int maths, int sanskrit) {
    float percentage = ((science+ maths + sanskrit)/3.0);
    return percentage;
}