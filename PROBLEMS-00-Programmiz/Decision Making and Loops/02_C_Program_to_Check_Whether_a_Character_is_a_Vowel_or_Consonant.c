#include<stdio.h>

int main()
{
    char CHARACTER;
    printf("\n");

    printf("Character : ");
    scanf("%c", &CHARACTER);

    if (CHARACTER == 'a' || CHARACTER == 'e' || CHARACTER == 'i' || CHARACTER == 'o' || CHARACTER == 'u' || CHARACTER == 'A' || CHARACTER == 'E' || CHARACTER == 'I' || CHARACTER == 'O' || CHARACTER == 'U'){
        printf("Vowel");
    }
    else {
        printf("Consonent");
    }

    printf("\n");
    return 0;
}