#include<stdio.h>
#include<string.h>


int main(){ 

    char c = 'n';
    char char_string[] = "Anup Kumar Mondal";
    int count = 0;

    for (int i = 0; i < strlen(char_string); i++)
    {        
        if (char_string[i] == c)
        {
            count = count + 1;
        }
        
    }
    
    printf("%d", count);
return 0;
}