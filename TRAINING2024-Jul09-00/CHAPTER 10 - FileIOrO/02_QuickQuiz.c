#include<stdio.h>

int main()
{
printf("");

    FILE *ptr;
    ptr = fopen("LearncFILE.txt", "r");

    if (ptr == NULL)
    {
        printf("File Doesn't Exists ! ");
    }

    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("Value : %d", num);

        fscanf(ptr, "%d", &num);
        printf("Value : %d", num);
    }

printf("");
return 0;
}