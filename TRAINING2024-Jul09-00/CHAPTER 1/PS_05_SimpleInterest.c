#include<stdio.h>

int main(){

    float principal_amount, interest_rate, the_time, simple_interest;

    printf("Principal Amount : ");
    scanf("%f", &principal_amount);

    printf("Interest Rate : ");
    scanf("%f", &interest_rate);

    printf("The Time : ");
    scanf("%f", &the_time);

    simple_interest = (principal_amount * interest_rate * the_time) / 100;

    printf("Simple Interest : %f", simple_interest);

return 0;
}