#include<stdio.h>
#include<string.h>

int main(){

printf("\n");

    int i;
    char string_greeting_1[20] = "Good Morning !";
    char string_greeting_2[20] = "Good Afternoon !";
    char string_greeting_3[20] = "Good Evening !";
    char string_greeting_4[20] = "Good Night !";
    char string_greeting_5[20] = "Good Night !";

    printf("%d ", strcmp(string_greeting_1, string_greeting_2));
    printf("%d ", strcmp(string_greeting_2, string_greeting_3));
    printf("%d ", strcmp(string_greeting_3, string_greeting_4));
    printf("%d ", strcmp(string_greeting_4, string_greeting_5));


printf("\n\n");
return 0;
}