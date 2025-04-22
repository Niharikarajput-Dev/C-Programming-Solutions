//function to print hello and goodbye 
#include <stdio.h>

// Function declarations
void hello();
void goodbye();

int main() {
    hello();    // Function call
    goodbye();  // Function call
    return 0;
}

// Function definitions
void hello() {
    printf("hello\n");
}

void goodbye() {
    printf("goodbye\n");
}
