//calculate percentage of a student from marks in sanskrit, maths and science
#include<stdio.h>
float calcPercentage(int science, int maths, int sanskrit);

int main () {
    int science = 98;
    int maths = 89;
    int sanskrit = 78;

    printf("percentage is : %.2f\n", calcPercentage(science,maths,sanskrit));

}

float calcPercentage(int science, int maths, int sanskrit) {
    return((science+maths+sanskrit)/3.0);

}