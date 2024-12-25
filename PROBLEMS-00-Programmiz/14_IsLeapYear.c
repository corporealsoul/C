#include<stdio.h>

int main()
{
printf("\n");    
    int year;

    printf("Year : ");
    scanf("%d", &year);
    
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        printf("Leapyear !!");
    }
    else
    {
        printf("Not a Leap Year !!");
    }
        
printf("\n");
return 0;
}



// #include<stdio.h>

// int main()
// {
// printf("\n");    
//     int year;

//     printf("Year : ");
//     scanf("%d", &year);
    
//     if (year % 400 == 0)
//     {
//         printf("Leap Year !!");
//     }
//     else if (year % 100 == 0)
//     {
//         printf("Not a Leap Year !!");
//     }
//     else if(year % 4 == 0)
//     {
//         printf("Leapyear !!");
//     }
//     else
//     {
//         printf("Not a Leap Year !!");
//     }
    
    
        
// printf("\n");
// return 0;
// }