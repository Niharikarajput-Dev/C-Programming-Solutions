//program to search a number in array
#include <stdio.h>
int main()
{
    int num[10], size = 10, i, search_number, found = 0;
    printf("Enter the numbers:\n ");
    for(i=0; i<size; i++) {
        scanf("%d", &num[i]);
    }

    printf("Which number do you want to search ?");
    scanf("%d", &search_number);

    for(i=0; i<size; i++) {
        if(search_number == num[i]) {
            printf("number %d found at index %d\n ",search_number, i);
            found = 1;
            // break;
        }
    }
    if(found == 0) {
        printf("number not found .");
    }
    return 0;
}