#include <stdio.h>
int main(){
    printf("\n");
    int FIRST_SIDE = 1, SECOND_SIDE = 2, THIRD_SIDE = 5;

    if (((FIRST_SIDE + SECOND_SIDE) > THIRD_SIDE) && ((SECOND_SIDE + THIRD_SIDE) > FIRST_SIDE) && ((FIRST_SIDE + THIRD_SIDE) > SECOND_SIDE)) {
        printf("Can form a TRIANGLE ");
    }
    else {
        printf("Can't form a TRIANGLE ");
    }

    printf("\n");
    return 0;
}
