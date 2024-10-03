#include<stdio.h>

void to_uppercase(char *char_array){

    while (*char_array != '\0')
    {
        if (*char_array >= 'a' && *char_array <= 'z')
        {
            *char_array = *char_array - 32;
        }
        char_array ++;
    }
}


int main(){
printf("\n");

    char char_array[] = "Hello C!";

    to_uppercase(char_array);

    printf("Uppercase : %s", char_array);

printf("\n");
return 0;
}