// #include<stdio.h>

// int main()
// {
// printf("\n");

//     int range;
//     int loop;
//     int store = 0;

//     printf("Range : ");
//     scanf("%d", &range);
    
//     for(loop = 0 ; loop <= range ; loop++)
//     {
//         store = store + loop;
//     }
    
//     printf("Sum on natural numbers : %d", store);

// printf("\n");
// return 0;
// }








// #include<stdio.h>

// int main()
// {
// printf("\n");

//     int range;
//     int loop = 1;
//     int store = 0;

//     printf("Range : ");
//     scanf("%d", &range);
    
//     while(range > 0)
//     {
//         store = store + loop;
//         loop ++;
//         range --;
//     }
//     printf("Sum of natural numbers : %d", store);
    
// printf("\n");
// return 0;
// }







#include<stdio.h>

int main()
{
printf("\n");

    int range;
    int loop = 1;
    int store = 0;

    printf("Range : ");
    scanf("%d", &range);
    
    while(loop <= range)
    {
        store = store + loop;
        loop ++;
    }
    printf("Sum of natural numbers : %d", store);
    
printf("\n");
return 0;
}
