#include<stdio.h>

int main()
{
printf("");

    FILE *ptr;
    ptr = fopen("LearnCFILEWrite.txt", "a");

    int num = 200;

    fprintf(ptr, "Value : %d \n", num);

    fclose(ptr);

printf("");
return 0;
}