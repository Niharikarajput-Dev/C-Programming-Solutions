//check whether the alphabet is vowel or consonent
#include<stdio.h>
int main() 
{
    char c;
    printf("enter a character :");
    scanf("%c",&c);
    if(c == 'A'|| c == 'E'|| c == 'I' || c == 'O' || c == 'U'  ||  c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        printf("the alphabet is a vowel",c);
    }
    else{
        printf("the alphabet is a consonent");
    }
}