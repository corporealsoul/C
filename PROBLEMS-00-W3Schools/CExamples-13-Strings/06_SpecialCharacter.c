#include<stdio.h>

int main(){

printf("\n");

    char string_greeting_spaced[] = "We are the so-called \"Vikings\" from the north.";

    printf("Character : %s \n", string_greeting_spaced);

    int size = sizeof(string_greeting_spaced) / sizeof(string_greeting_spaced[0]);

    for (int i = 0; i < size; i++)
    {
        printf("%c ", string_greeting_spaced[i]);
    }

printf("\n\n");
return 0;
}


