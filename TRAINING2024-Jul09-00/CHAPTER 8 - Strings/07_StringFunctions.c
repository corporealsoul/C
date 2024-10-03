#include <stdio.h>
#include <string.h>

int main() {

    char array_variable_one[30], array_variable_one_target[30];
    int i_print;

printf("\n");

    printf("Srting : ");
    gets(array_variable_one);
    printf("\n\n");

    printf("Entered Srting : ");
    puts(array_variable_one);
    printf("\n\n");

    printf("Srting length : %d", strlen(array_variable_one));
    printf("\n\n");

    strcpy (array_variable_one_target, array_variable_one);
    printf("Copied : %s", array_variable_one_target);
    printf("\n\n");

    strcat (array_variable_one, array_variable_one_target);
    printf("Concatinated : %s %s", array_variable_one, array_variable_one_target);
    printf("\n\n");

    int comp = strcmp (array_variable_one, array_variable_one_target);
    printf("Compare : %d", comp);
    printf("\n\n");


printf("\n");
return 0;
}