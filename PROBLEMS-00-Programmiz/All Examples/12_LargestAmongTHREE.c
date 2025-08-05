#include <stdio.h>

int main()
{
printf("\n");

    int entNo_one, entNo_two, entNo_three;

    printf("Enter NO One : ");
    scanf("%d", &entNo_one);
    
    printf("Enter NO Two : ");
    scanf("%d", &entNo_two);

    printf("Enter NO Three : ");
    scanf("%d", &entNo_three);    
    
    if (entNo_one > entNo_two)
    {
        if(entNo_one > entNo_three)
        {
            printf("Number One : %d", entNo_one);
        }
    }
    else if(entNo_two > entNo_three)
    {
        printf("Number Two : %d", entNo_two);
    }
    else
    {
        printf("Number Three : %d", entNo_three);
    }

printf("\n");
return 0;
}















#include <stdio.h>

int main()
{
printf("\n");

    int entNo_one, entNo_two, entNo_three;

    printf("Enter NO One : ");
    scanf("%d", &entNo_one);
    
    printf("Enter NO Two : ");
    scanf("%d", &entNo_two);

    printf("Enter NO Three : ");
    scanf("%d", &entNo_three);    
    
    if (entNo_one > entNo_two && entNo_one > entNo_three)
    {
        printf("Number One : %d", entNo_one);
    }
    else if (entNo_two > entNo_one && entNo_two > entNo_three)
    {
        printf("Number Two : %d", entNo_two);
    }
    else
    {
        printf("Number Three : %d", entNo_three);
    }

printf("\n");
return 0;
}









#include <stdio.h>

int main()
{
printf("\n");

    int entNo_one, entNo_two, entNo_three;

    printf("Enter NO One : ");
    scanf("%d", &entNo_one);
    
    printf("Enter NO Two : ");
    scanf("%d", &entNo_two);

    printf("Enter NO Three : ");
    scanf("%d", &entNo_three);    
    
    if (entNo_one > entNo_two && entNo_one > entNo_three)
    {
        printf("Number One : %d", entNo_one);
    }
    if (entNo_two > entNo_one && entNo_two > entNo_three)
    {
        printf("Number Two : %d", entNo_two);
    }
    if (entNo_three > entNo_one && entNo_three > entNo_two)
    {
        printf("Number Three : %d", entNo_three);
    }

printf("\n");
return 0;
}










#include <stdio.h>

int main()
{
printf("\n");

    int entNo_one, entNo_two, entNo_three;

    printf("Enter NO One : ");
    scanf("%d", &entNo_one);
    
    printf("Enter NO Two : ");
    scanf("%d", &entNo_two);

    printf("Enter NO Three : ");
    scanf("%d", &entNo_three);    
    
    if (entNo_one > entNo_two)
    {
        if(entNo_one > entNo_three)
        {
            printf("Number One : %d", entNo_one);
        }
        else
        {
            printf("Number Three : %d", entNo_three);
        }
    }
    if (entNo_two > entNo_one)
    {
        if(entNo_two > entNo_three)
        {
            printf("Number Two : %d", entNo_two);
        }
        else
        {
            printf("Number Three : %d", entNo_three);
        }
    }

printf("\n");
return 0;
}