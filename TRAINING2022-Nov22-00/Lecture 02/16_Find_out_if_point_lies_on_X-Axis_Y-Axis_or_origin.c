#include <stdio.h>
int main(){
    double x_cordinate = -4, y_cordinate = 3;
    double m1_slope, m2_slope;
    printf("\n");

    if (x_cordinate == 0 && y_cordinate == 0) {
        printf("Lies on Origin \n");
    }
    else if (y_cordinate == 0) {
        printf("Lies on X-Axis \n");
    }
    else if (x_cordinate == 0) {
        printf("Lies on Y-Axis \n");
    }
    else if ((x_cordinate > 0) && (y_cordinate > 0)) {
        printf("Point lies on : (X,Y) \n");
    }
    else if ((x_cordinate > 0) && (y_cordinate < 0)) {
        printf("Point lies on : (X,-Y) \n");
    }
    else if ((x_cordinate < 0) && (y_cordinate < 0)) {
        printf("Point lies on : (-X,-Y) \n");
    }
    else if ((x_cordinate < 0) && (y_cordinate > 0)) {
        printf("Point lies on : (-X,Y) \n");
    }
    else {
        printf("Wrong Input !");
    }


    printf("\n");
    return 0;
}
