#include<stdio.h>

int main()
{
printf("");

    char ch;

    FILE *ptr;
    ptr = fopen("LearnCFILEWrite.txt", "r");

    while (1)
    {
        ch = fgetc(ptr);
        printf("%c", ch);

        if (ch == EOF)
        {
            break;
        }
        
    }

printf("");
return 0;
}