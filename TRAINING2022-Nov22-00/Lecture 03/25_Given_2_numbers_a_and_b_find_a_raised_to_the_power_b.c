#include <stdio.h>

int main() {

    printf("\n");

    int BASE, POWER;
    int POWER_OF;
    int LOOP;

    printf("Enter Base : ");
    scanf("%d", &BASE);

    printf("Enter Power : ");
    scanf("%d", &POWER);

    POWER_OF = BASE;

    for (LOOP = 1 ; LOOP < POWER ; LOOP = LOOP + 1) {
        POWER_OF = POWER_OF * BASE;
    }

    printf("\n");
    printf("%d To the POWER %d is : \t %d", BASE, POWER, POWER_OF);


    printf("\n");
    return 0;
}