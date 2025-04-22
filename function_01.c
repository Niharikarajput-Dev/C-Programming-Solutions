//waf if user is indian print namaste and if french print namaste 
#include<stdio.h>
void namaste(); // function declaration
void bonjour();

int main() {
    printf("enter f for french and i for indian :"); 
    char ch;                 
    scanf("%c",&ch);                    //function call

    if(ch == 'i') {
        printf("namaste \n");
    }
    else{
        printf("bonjour\n");
    }
}

void namaste () {
    printf("namaste\n");       //function definiton
}
void bonjour () {
    printf("bonjour\n");
}
