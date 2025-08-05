#include<stdio.h>

int main()
{
printf("\n");

    char random_character;

    printf("Character : ");
    scanf("%c", &random_character);

    if ((random_character >= 65 && random_character <= 90) || (random_character >= 97 && random_character <= 122))
    {
        printf("%c is an ALPHABET", random_character);
    }
    else
    {
        printf("%c is Not an ALPHABET", random_character);
    }
printf("\n");
return 0;
}






#include<stdio.h>

int main()
{
printf("\n");

    char random_character;

    printf("Character : ");
    scanf("%c", &random_character);

    if ((random_character >= 'A' && random_character <= 'Z') || (random_character >= 'a' && random_character <= 'z'))
    {
        printf("%c is an ALPHABET", random_character);
    }
    else
    {
        printf("%c is Not an ALPHABET", random_character);
    }

printf("\n");
return 0;
}