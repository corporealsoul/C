#include<stdio.h>
#include<string.h>


int main(){ 

    char c = 's';
    char char_string[] = "Anup Kumar Mondal";
    int count = 0;

    for (int i = 0; i < strlen(char_string); i++)
    {        
        if (char_string[i] == c)
        {
            count = 1;
        }
        
    }
    if (count == 1)
    {
        printf("Present");
    }
    else
    {
        printf("Not Present");
    }

return 0;
}