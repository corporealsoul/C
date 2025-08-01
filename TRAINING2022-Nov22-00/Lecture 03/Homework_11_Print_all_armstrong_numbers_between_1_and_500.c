#include <stdio.h>
int main() {

    printf("\n");

    int LOOP;
    int NUMBER = 407;
    int NUMBER_TEMPO = NUMBER;
    int REMAINDER;
    int CUBE_ADDITION = 0;


    for (LOOP = 1 ; NUMBER > 0 ; LOOP++) {
        REMAINDER = NUMBER % 10;
        CUBE_ADDITION = CUBE_ADDITION + (REMAINDER * REMAINDER *REMAINDER);
        printf("REMAINDER : %d \n", REMAINDER);

        NUMBER = NUMBER / 10;
    }
    printf("\n");
    printf("CUBE_ADDITION : %d \n", CUBE_ADDITION);

    if (NUMBER_TEMPO == CUBE_ADDITION) {
        printf("%d : is a Armstrong Number", NUMBER_TEMPO);
    }
    else {
        printf("%d : is not a Armstrong Number", NUMBER_TEMPO);
    }

    printf("\n");
    return 0;
}