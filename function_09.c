//function to swap two numbers
// #include<stdio.h>
// void swap(int a, int b);

// int main() {
//     int a , b;
//     printf("enter two numbers to be swap : ");
//     scanf("%d%d",&a,&b);

//     swap(&a,&b);

//     printf("numbers after swapping :%d%d\n ", a,b);

//     return 0;

// }

// void swap(int a, int b)  {                //here in this code the swapping happpens inside but due to call by value the original value in main remains unchanged due to which it return the original output without swapping
//     int temp = a;
//     a = b;
//     b = temp;

// }
#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b) {  //and in this code we do it by call by reference therefore , the swapping take memory adddress of pointers and change its value in the main and hence return swapp output
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a, b;
    printf("Enter two numbers to be swapped: "); 
    scanf("%d %d", &a, &b);

    swap(&a, &b);  // Pass addresses of a and b 

    printf("Numbers after swapping: %d %d\n", a, b); // always use pointers for swapp in c 
    return 0;
}



