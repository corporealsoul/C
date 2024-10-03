#include<stdio.h>

int main(){
printf("\n");

    char char_array[] = "C Language";
    char *char_pointer = char_array;

    printf("%c", char_pointer);

    while (*char_pointer != '\0')
    {
        printf("%c", *char_pointer);
        char_pointer ++;
    }

printf("\n");
return 0;
}