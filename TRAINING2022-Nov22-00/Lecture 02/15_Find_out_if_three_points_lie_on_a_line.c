#include <stdio.h>
int main(){
    double x1_cordinate = 1, y1_cordinate = 2, x2_cordinate = 2, y2_cordinate = 4, x3_cordinate = 3, y3_cordinate = 6;
    double m1_slope, m2_slope;

    printf("\n");
    m1_slope = (y2_cordinate - y1_cordinate) / (x2_cordinate - x1_cordinate);
    m2_slope = (y3_cordinate - y2_cordinate) / (x3_cordinate - x2_cordinate);

    if (m1_slope == m2_slope) {
        printf("They lies on a line");
    }
    else {
        printf("They don't lie on a line");
    }

    printf("\n");
    return 0;
}
