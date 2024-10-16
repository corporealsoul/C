#include<stdio.h>

int main()
{
printf("\n");

    FILE *ptr;
    char name1[34], name2[34];
    int salary1, salary2;

    ptr = fopen("FileInt.txt", "r");

    fscanf(ptr, "%d", &num);

    fclose(ptr);

    ptr = fopen("int.txt", "w");
    fprintf(ptr, "%d", 2*num);

    fclose(ptr);

printf("\n");
return 0;
}