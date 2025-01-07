#include<stdio.h>

int main()
{
printf("\n\n");
    char fullName[30];

    printf("Type your full name: \n");
    fgets(fullName, sizeof(fullName), stdin);

    printf("Hello %s", fullName);
printf("\n\n");
return 0;
}