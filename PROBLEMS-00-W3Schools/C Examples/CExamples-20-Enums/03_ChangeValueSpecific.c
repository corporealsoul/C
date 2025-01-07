#include <stdio.h>

enum Level {
    LOW = 20,
    MEDIUM,
    HIGH,
};

int main() {
    printf("\n");

    enum Level level = MEDIUM;

    printf("%d ", level);

    printf("\n");
    return 0;
}