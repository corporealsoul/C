// #include <stdio.h>
//
// int main()
// {
//     int ROW, COLUMN;
//     int ROW_LOOP, COLUMN_LOOP;
//
//     printf("\n");
//
//     printf("Enter ROW (height of pyramid): ");
//     scanf("%d", &ROW);
//
//     printf("Enter COLUMN (width of pyramid): ");
//     scanf("%d", &COLUMN);
//
//     for (ROW_LOOP = 1 ; ROW_LOOP <= ROW ; ROW_LOOP ++) {
//         for (COLUMN_LOOP = 1; COLUMN_LOOP <= COLUMN; COLUMN_LOOP++) {
//             if (ROW_LOOP <= COLUMN_LOOP) {
//                 printf("* ");
//             }
//             // else {
//             //     printf("  ");
//             // }
//         }
//         printf("\n");
//     }
//
//     printf("\n");
//     return 0;
// }








#include <stdio.h>

int main()
{
    int ROW, COLUMN;
    int ROW_LOOP, COLUMN_LOOP;

    printf("\n");

    printf("Enter ROW (height of pyramid): ");
    scanf("%d", &ROW);

    printf("Enter COLUMN (width of pyramid): ");
    scanf("%d", &COLUMN);

    for (ROW_LOOP = 1 ; ROW_LOOP <= ROW ; ROW_LOOP ++) {
        for (COLUMN_LOOP = 1; COLUMN_LOOP <= (ROW + 1) - ROW_LOOP; COLUMN_LOOP++) {
            printf("* ");
        }
        printf("\n");
    }

    printf("\n");
    return 0;
}