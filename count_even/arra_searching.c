// Search for a Number in a 1D Array
#include <stdio.h>
int main() {
    int num[10], size = 10, i, found = 0, search_number;
    printf("Enter 10 integers :\n");
    for(i=0; i<size; i++) {
        scanf("%d", &num[i]);
    }

    printf("Enter the number to be searched : ");
    scanf("%d", &search_number);

    for(i=0; i<size; i++){
        if(search_number == num[i]){
            printf("number %d found at index %d\n", search_number,i);
            found = 1;
            
        }
        
    }

    if(found == 0) {
        printf("Number not found");
    }
    return 0;
}