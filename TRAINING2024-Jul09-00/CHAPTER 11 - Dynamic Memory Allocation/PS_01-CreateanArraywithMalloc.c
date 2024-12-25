#include<stdio.h>
#include<stdlib.h>

int main()
{
printf("\n");
    
    int number = 6;
    int *ptr;

    ptr = (int*) malloc (number * sizeof(int));

    ptr[0] = 45;

    printf("%d ", ptr[0]);

printf("\n\n");
return 0;
}


// #include <stdio.h>
// #include <stdlib.h>

// int main()
// {
// printf("\n");

//     int range;
//     int *pointer_array;

//     pointer_array = (int*) malloc (range * sizeof(int));

//     pointer_array[0] = 5;

//     printf("%d ", pointer_array[0]);

// printf("\n");
// return 0;
// }



// #include<stdio.h>
// #include<stdlib.h>

// int main()
// {
// printf("\n");
//     int range = 5;
//     int *pointer_array;

//     pointer_array = (int*) malloc (range * sizeof(int));

//     for (int i = 0; i <= range; i++)
//     {
//         // scanf("%d", &i);

//         pointer_array[i] = i + 1;
//     }
    
//     for (int i = 0; i <= range; i++)
//     {
//         printf("%d ", pointer_array[i]);
//     }
    
// return 0;
// printf("\n");
// }