#include <stdio.h>

enum Level {
    LOW,
    MEDIUM,
    HIGH,
};

int main() {
    printf("\n");

    enum Level level = HIGH;

    printf("%d ", level);

    printf("\n");
    return 0;
}