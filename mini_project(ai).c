#include <stdio.h>

int main() {
    int choice, num, i;

    while (1) {
        // Menu
        printf("\n===== EVEN/ODD CHECKER MENU =====\n");
        printf("1. Check a number\n");
        printf("2. Exit\n");
        printf("Enter your choice (1 or 2): ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("\nEnter a number: ");
            scanf("%d", &num);

            if (num % 2 == 0) {
                printf("Number is EVEN.\n");
                printf("Even numbers from 2 to %d:\n", num);
                for (i = 2; i <= num; i += 2) {
                    printf("%d ", i);
                }
            } else {
                printf("Number is ODD.\n");
                printf("Odd numbers from 1 to %d:\n", num);
                i = 1;
                while (i <= num) {
                    printf("%d ", i);
                    i += 2;
                }
            }
            printf("\nDone checking!\n");

        } else if (choice == 2) {
            printf("Exiting program. Thank you!\n");
            break;
        } else {
            printf("Invalid choice. Please enter 1 or 2.\n");
        }

        // Clear input buffer before next loop
        while (getchar() != '\n');
        printf("\nPress Enter to return to menu...");
        getchar();
    }

    return 0;
}
