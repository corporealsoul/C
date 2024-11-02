#include <stdio.h>
#include <string.h>

struct FirstStructure {
    char brand[50];
    char model[50];
    int year;
};

int main() {
    printf("\n");

    struct FirstStructure car_1 = {"BMW", "X5", 1999};
    struct FirstStructure car_2 = {"Ford", "Mustang", 1969};
    struct FirstStructure car_3 = {"Toyota", "Corolla", 2011};

    printf("%s %s %d \n", car_1.brand, car_1.model, car_1.year);
    printf("%s %s %d \n", car_2.brand, car_2.model, car_2.year);
    printf("%s %s %d \n", car_3.brand, car_3.model, car_3.year);

    printf("\n");
    return 0;
}