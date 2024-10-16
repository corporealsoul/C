#include<stdio.h>

int main()
{
printf("");

    FILE *ptr;

    ptr = fopen("LearncFILE.txt", "r");
    int num;

    fscanf(ptr, "%d", &num);
    printf("Value : %d \n", num);

    fscanf(ptr, "%d", &num);
    printf("Value : %d \n", num);

    fclose(ptr);
printf("");
return 0;
}