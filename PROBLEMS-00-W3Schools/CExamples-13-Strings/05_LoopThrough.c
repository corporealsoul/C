#include<stdio.h>

int main(){

printf("\n");

    char string_greeting_spaced[] = {'H', 'e', 'l', 'l', 'o', ' ', 'C', '!', '\0'};

    printf("Character : %c \n", string_greeting_spaced[4]);

    string_greeting_spaced[4] = 'o';
    printf("Character : %c \n", string_greeting_spaced[4]);
    printf("\n");

    int size = sizeof(string_greeting_spaced) / sizeof(string_greeting_spaced[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%c ", string_greeting_spaced[i]);
    }

printf("\n\n");
return 0;
}