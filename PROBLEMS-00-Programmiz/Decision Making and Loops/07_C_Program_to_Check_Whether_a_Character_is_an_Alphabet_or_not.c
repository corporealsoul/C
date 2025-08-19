#include<stdio.h>

int main()
{
    char CHARACTER;
    printf("\n");

    printf("Enter Number : ");
    scanf("%c", &CHARACTER);

    if (((CHARACTER >= 'A') && (CHARACTER <= 'Z')) || ((CHARACTER >= 'a') && (CHARACTER <= 'z')))
    {
        printf("Alphabet");
    }
    else {
        printf("Something else");

    }


    printf("\n");
    return 0;
}

