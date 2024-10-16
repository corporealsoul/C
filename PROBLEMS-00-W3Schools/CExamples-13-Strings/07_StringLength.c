#include<stdio.h>
#include<string.h>

int main(){

printf("\n");

    int i;
    char string_greeting_spaced[] = "We are the so-called \"Vikings\" from the north.";

    printf("Character : %s \n", string_greeting_spaced);

    int size = sizeof(string_greeting_spaced) / sizeof(string_greeting_spaced[0]);

    for (i = 0; i < size; i++)
    {
        if (string_greeting_spaced[i] == '\0')
        {
            break;
        }
    }
    printf("\n");
    printf("Length of the string : %d ", i);

    printf("\n");
    printf("Length of the string : %d ", strlen(string_greeting_spaced));

printf("\n\n");
return 0;
}