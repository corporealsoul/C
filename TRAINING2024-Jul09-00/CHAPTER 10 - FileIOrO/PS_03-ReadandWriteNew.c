#include<stdio.h>

int main()
{
printf("");

    char ch;

    FILE *ptr;
    FILE *ptr2;

    ptr = fopen("LearnCFILERead.txt", "r");
    ptr2 = fopen("LearnCFILEWriteTwice.txt", "a");

    while (1)
    {
        ch = fgetc(ptr);
        
        if (ch == EOF)
        {
            break;
        }
        else
        {
            fprintf(ptr2, "%c", ch);
            fprintf(ptr2, "%c", ch);

            printf("%c", ch);
        }
    }
printf("");
return 0;
}