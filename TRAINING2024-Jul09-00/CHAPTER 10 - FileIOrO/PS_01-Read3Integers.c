#include<stdio.h>

int main()
{
printf("");

    FILE *ptr;
    int num;
    ptr = fopen("LearncFILERead.txt", "r");

    fscanf(ptr, "%d", &num);
    printf("Value : %d \n", num);

    fscanf(ptr, "%d", &num);
    printf("Value : %d \n", num);

    fscanf(ptr, "%d", &num);
    printf("Value : %d \n", num);

    fclose(ptr);

printf("");
return 0;
}