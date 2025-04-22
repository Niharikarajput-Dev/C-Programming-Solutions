#include <stdio.h>

int main() {
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("You entered: %d\n", num);
    
    printf("Press Enter to exit...");
    getchar(); // eats leftover newline
    getchar(); // waits for your Enter

    return 0;
}
