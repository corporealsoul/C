#include <stdio.h>
int main()
{
    printf("\n");

    int numbers[] = {18, 23, 19, 20, 21};
    int largest = numbers[0];

    for (int loop = 0 ; loop <= 5 ; loop ++) {
        if (numbers[loop] > largest) {
            largest = numbers[loop];
        }
    }

    printf("Largest : %d", largest);

    printf("\n");
    return 0;
}
