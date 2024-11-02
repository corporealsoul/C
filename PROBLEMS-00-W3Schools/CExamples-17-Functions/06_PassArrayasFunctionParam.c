#include <stdio.h>

int ArrayPass(int numbers_array[5]) {
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", numbers_array[i]);
    }
}

int main() {
    int numbers_array[5] = {1, 2, 3, 4, 5};
    ArrayPass(numbers_array);
    return 0;
}