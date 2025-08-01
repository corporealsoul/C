#include <stdio.h>
int main() {

    printf("\n");

    int NUMBER = 12045;
    int TEMP_NUMBER = NUMBER;
    int REMAINDER;
    int STORE = 0;

    while (NUMBER > 0) {
        REMAINDER = NUMBER % 10;
        STORE = STORE * 10 + REMAINDER;
        NUMBER = NUMBER / 10;
    }
    printf("Original : %d \n", TEMP_NUMBER);
    printf("Reverse : %d \n", STORE);

    int ADDITION = TEMP_NUMBER + STORE;

    printf("Addition : %d", ADDITION);

    printf("\n");
    return 0;
}