#include <stdio.h>
int main()
{
    printf("\n");

    int num_1 = 18, num_2 = 17, num_3 = 19, num_4 = 20, num_5 = 21;
    int grp_1, grp_2, grp_3 = num_5;

    if (num_1 > num_2) {
        grp_1 = num_1;
    }
    else {
        grp_1 = num_2;
    }

    if (num_3 > num_4) {
        grp_2 = num_3;
    }
    else {
        grp_2 = num_4;
    }

    if (grp_1 > grp_2) {
        if (grp_1 > grp_3) {
            printf("%d ", grp_1);
        }
        else {
            printf("%d ", grp_3);
        }
    }
    else if (grp_2 > grp_3) {
        printf("%d ", grp_2);
    }
    else {
        printf("%d ", grp_3);
    }

    printf("\n");
    return 0;
}
