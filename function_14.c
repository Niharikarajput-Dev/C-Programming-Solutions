//write a function to print nth of the fibonacci series/sequence

#include <stdio.h>
int fibonacci(int n);

int main() {
    int n, fib;
    printf("enter n : ");
    scanf("%d",&n);

    fib = fibonacci(n);

    printf("The %dth Fibonacci number is: %d\n", n, fib);

}

int fibonacci(int n) {
    if(n == 0) {
        return 0;
    }
    if(n == 1) {
        return 1;
    }
    int FibNm1 = fibonacci(n-1);
    int FibNm2 = fibonacci(n-2);
    int FibN = FibNm1 + FibNm2;

    return FibN;
}