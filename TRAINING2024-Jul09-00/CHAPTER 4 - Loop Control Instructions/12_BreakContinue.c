// BREAK
// #include <stdio.h>

// int main() {

//     int loop, count = 10;

// printf("\n");

//     for (loop = 1; loop < count; loop++)
//     {
//         printf("World of C Language, where I'm in LOOOOOOP ! %d\n", loop);

//         if (loop == 5)
//         {
//             break;
//         }
        
//     }
    
// printf("\n");
// return 0;
// }







// CONTINUE
#include <stdio.h>

int main() {

    int loop, count = 10;

printf("\n");

    for (loop = 1; loop < count; loop++)
    {
        if (loop == 5)
        {
            continue;
        }
        printf("World of C Language, where I'm in LOOOOOOP ! %d\n", loop);
    }
    
printf("\n");
return 0;
}