#include<stdio.h>
#include<string.h>

int main()
{
printf("\n");

    char ch_aar[] = {"abschrt"};
    char ch_arr[] = {"abschrt"};
    
    int x = strcmp(ch_aar, ch_arr);

    if (x == 0)
    {
        printf("Both are same !");
    }
    else
    {
        printf("Not same !");
    }
    
printf("\n\n");
return 0;
}