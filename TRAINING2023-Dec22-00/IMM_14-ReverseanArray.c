#include <stdio.h>
#include <string.h>

int main()
{
printf("\n");

    char a[10] = {"Anup"};
    int strlength = strlen(a);

    printf("String : %s \n", a);
    printf("String length : %d \n", strlength);

    for (int i = 0; i < strlength / 2; i++)
    {
        char temp = a[i];
        a[i] = a[strlength - i - 1];
        a[strlength - i - 1] = temp;
    }

    printf("Reversed : %s \n", a);
    
printf("\n\n");
return 0;
}