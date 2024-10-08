#include<stdio.h>

typedef struct c
{
    int real;
    int imaginary;
}Complex;


Complex display(Complex c){
    printf("Value is :  %d + %di", c.real, c.imaginary);
}


int main(){
    printf("\n");

        Complex carr[5];

        for (int i = 0; i < 5; i++)
        {
            printf("Enter real part : ");
            scanf("%d", &carr[i].real);

            printf("Enter imaginary part : ");
            scanf("%d", &carr[i].imaginary);

            display(carr[i]);
            printf("\n");
        }
        
    printf("\n");
return 0;
}