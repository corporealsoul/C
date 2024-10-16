// #include<stdio.h>

// int main()
// {
// printf("");

//     FILE *ptr;
//     ptr = fopen("LearnCFILEWrite.txt", "r");

//     char c = fgetc(ptr);
//     printf("%c", c);

//     // fputc('c', ptr);

// printf("");
// return 0;
// }





#include<stdio.h>

int main()
{
printf("");

    FILE *ptr;
    ptr = fopen("LearnCFILEWrite.txt", "a");

    // char c = fgetc(ptr);
    // printf("%c", c);

    fputc('C', ptr);

printf("");
return 0;
}