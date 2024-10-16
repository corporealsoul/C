#include<stdio.h>

int main(){

    char string_greeting_spaced[] = {'H', 'e', 'l', 'l', 'o', ' ', 'C', '!', '\0'};

    printf("Character : %c \n", string_greeting_spaced[4]);

    string_greeting_spaced[4] = 'w';
    printf("Character : %c \n", string_greeting_spaced[4]);

return 0;
}