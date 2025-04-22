// Asks the user to enter a number

// Checks if it’s even or odd

// Prints all even numbers from 2 to that number (if even)

// Prints all odd numbers from 1 to that number (if odd)

// Says “Done!” at the end

// Waits for the user to press Enter before exit

#include <stdio.h>

int main() {
    int i, choice, num;

    while(1) {
        printf("\n === MENU===\n");
        printf("1. even/odd checker. \n");
        printf("2. exit.\n");

        printf("enter your choice(1 or 2) : ");
        scanf("%d", &choice);

        if(choice == 1) {
            printf("enter a number. \n");
            scanf("%d", &num);

            if(num%2 == 0) {
                printf("Number is even.\n");
                printf("Numbers from 2 to %d : \n", num);
                for(i=2; i<=num; i+=2) {
                    printf("%d\n", i);
                }
            } else {
                printf("Number are odd. \n");
                printf("Odd numbers from 1 to %d:\n", num);
                i = 1;
                while(i <= num) {
                    printf("%d\n", i);
                    i += 2;
                }

            }
            printf("\nDone Printing!\n");
            

            } else if (choice == 2) {
                printf("Exiting the program.\n");
                break;

            } else{
                printf("enter invalid choice (1 or 2)  : ");
            }

            while(getchar() != '\n');
            printf("\npress Enter to return to menu. \n ");
            getchar();
        }
        return 0;
}
