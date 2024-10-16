#include<stdio.h>

int main()
{
printf("");

    FILE *ptr;
    ptr = fopen("MulTable.txt", "w");
    int num = 7;

    for (size_t i = 1; i <= 10; i++)
    {
        fprintf(ptr, "%d", num * i);
        fprintf(ptr, "%c", '\n');
    }
    
    fclose(ptr);

printf("");
return 0;
}