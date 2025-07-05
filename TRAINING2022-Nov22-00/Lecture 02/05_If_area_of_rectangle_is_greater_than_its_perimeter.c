#include <stdio.h>
int main(){
    printf("\n");
    int Length = 1, Breadth = 1;
    int Area, Perimeter;

    Area = Length * Breadth;
    Perimeter = 2 * (Length + Breadth);

    if(Area > Perimeter)
    {
        printf("Area (%d) is greater than Perimeter (%d) \n", Area, Perimeter);
    }
    else
    {
        printf("Area (%d) is less than Perimeter (%d) \n", Area, Perimeter);
    }

    printf("\n");
    return 0;
}
