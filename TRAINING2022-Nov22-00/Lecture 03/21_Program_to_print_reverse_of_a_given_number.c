#include <stdio.h>
int main() {

    printf("\n");

    int NUMBER = 12045;
    int REMAINDER;
    int STORE = 0;


    while (NUMBER > 0) {
        REMAINDER = NUMBER % 10;
        STORE = STORE * 10 + REMAINDER;
        NUMBER = NUMBER / 10;
    }
    printf("%d ", STORE);

    printf("\n");
    return 0;
}