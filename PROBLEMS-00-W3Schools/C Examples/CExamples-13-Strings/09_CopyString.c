#include<stdio.h>
#include<string.h>

int main(){

printf("\n");

    int i;
    char string_greeting_1[20] = "Good morning !";
    char string_greeting_2[20] = "Good Afternoon !";
    char string_empty[20];

    strcpy(string_empty, string_greeting_2);

    printf("%s \n", string_empty);


printf("\n\n");
return 0;
}