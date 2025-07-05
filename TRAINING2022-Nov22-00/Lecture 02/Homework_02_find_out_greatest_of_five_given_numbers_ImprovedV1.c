#include <stdio.h>
int main()
{
    printf("\n");

    int num_1 = 18, num_2 = 17, num_3 = 22, num_4 = 20, num_5 = 21;
    int largest = num_1;

    if (num_2 > largest) {
        largest = num_2;
    }
    if (num_3 > largest) {
        largest = num_3;
    }
    if (num_4 > largest) {
        largest = num_4;
    }
    if (num_5 > largest) {
        largest = num_5;
    }

    printf("Largest : %d", largest);

    printf("\n");
    return 0;
}
