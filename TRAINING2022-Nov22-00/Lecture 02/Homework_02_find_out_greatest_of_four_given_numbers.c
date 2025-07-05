#include <stdio.h>
int main()
{
    printf("\n");

    int num_1 = 11, num_2 = 17, num_3 = 10, num_4 = 9;
    int grp_1, grp_2;

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
        printf("%d : Largest", grp_1);
    }
    else {
        printf("%d : Largest", grp_2);
    }


    printf("\n");
    return 0;
}
