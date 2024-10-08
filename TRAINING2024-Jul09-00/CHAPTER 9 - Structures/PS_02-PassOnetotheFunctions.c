// #include<stdio.h>

// struct vector
// {
//     int i;
//     int j;
// };

// struct vector sumVector(struct vector v1, struct vector v2)
// {
//     struct vector v3 = {(v1.i + v2.i), (v1.j + v2.j)};
//     return v3;
// }

// int main(){
//     printf("\n");

//     struct vector v1 = {1, 2};
//     struct vector v2 = {5, 6};
//     struct vector v3 = sumVector(v1, v2);

//     printf("Value of %di + %dj", v3.i, v3.j);

//     printf("\n");
// return 0;
// }






// Smilar as above

#include<stdio.h>

typedef struct vector
{
    int i;
    int j;
} V ;

V sumVector(V v1, V v2)
{
    V v3 = {(v1.i + v2.i), (v1.j + v2.j)};
    return v3;
}

int main(){
    printf("\n");

    V v1 = {1, 2};
    V v2 = {5, 6};
    V v3 = sumVector(v1, v2);

    printf("Value of %di + %dj", v3.i, v3.j);

    printf("\n");
return 0;
}