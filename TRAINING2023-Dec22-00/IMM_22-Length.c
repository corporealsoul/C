#include<stdio.h>
#include<string.h>

int main()
{
printf("\n");

    char ch_ar[] = {"abschrt"};
    int j;
    
    for (j = 0; ch_ar[j] != '\0'; j++)
    {
        printf("%c ", ch_ar[j]);
    }

    printf("String length : %d \n", j);

printf("\n\n");
return 0;
}