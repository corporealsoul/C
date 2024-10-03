#include<stdio.h>
#include<string.h>


int main(){ 

    char char_string[] = "Anup Kumar Mondal";

    for (int i = 0; i < strlen(char_string); i++)
    {
        char_string[i] = char_string[i] + 1;
    }
    
    printf("%s", char_string);
return 0;
}