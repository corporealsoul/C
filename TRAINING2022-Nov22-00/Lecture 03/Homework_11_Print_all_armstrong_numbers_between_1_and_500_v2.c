#include <stdio.h>
int main() {

    printf("\n");

    int LOOP;
    int NUMBER;
    int NUMBER_TEMPO;
    int REMAINDER;
    int CUBE_ADDITION;
    int SECOND_LOOP;

    for (SECOND_LOOP = 2; SECOND_LOOP <= 500; SECOND_LOOP++) {

        NUMBER = SECOND_LOOP;
        NUMBER_TEMPO = NUMBER;
        CUBE_ADDITION = 0;

        for (LOOP = 1 ; NUMBER > 0 ; LOOP++) {
            REMAINDER = NUMBER % 10;
            CUBE_ADDITION = CUBE_ADDITION + (REMAINDER * REMAINDER *REMAINDER);

            NUMBER = NUMBER / 10;
        }

        if (NUMBER_TEMPO == CUBE_ADDITION) {
            printf("%d : is a Armstrong Number \n", NUMBER_TEMPO);
        }
        else {
            continue;
        }
    }

    printf("\n");
    return 0;
}