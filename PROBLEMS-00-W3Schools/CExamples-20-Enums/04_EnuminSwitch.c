#include <stdio.h>

enum Level {
    LOW = 20,
    MEDIUM,
    HIGH,
};

int main() {
    printf("\n");

    enum Level level = MEDIUM;

    switch (level) {
      case LOW:
        printf("LOW");
        break;
      case MEDIUM:
        printf("MEDIUM");
        break;
      case HIGH:
        printf("HIGH");
        break;
    }

    printf("\n");
    return 0;
}