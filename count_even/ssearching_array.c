//program to search a number in an array.
#include <stdio.h>
int main()
{
    int num[10], i, search_number, found = 0;
    printf("Enter the number of arrays :\n");
    for(i=0; i<10; i++) {
        scanf("%d", &num[i]);
    }

    printf("Enter the number you want to search : ");
    scanf("%d", &search_number);

    for(i=0; i< 10; i++) {
        if(num[i] == search_number) {
            printf("%d is found(at index %d).\n", search_number, i);
            found = 1;
            break;
        }
    }
    if(found == 0) {
        printf("number not found.\n");
    }
    return 0;

}