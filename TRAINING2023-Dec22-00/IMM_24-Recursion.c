#include<stdio.h>

int recur_1stfunc();
int recur_2ndfunc();
int recur_3rdfunc();


int main()
{
printf("\n"); 

    recur_1stfunc();
    printf("\n");

    recur_1stfunc();

printf("\n\n");
return 0;
}

int recur_1stfunc()
{
    printf("I was called by : main,\t\t\t\t from : recur_1stfunc! \n");
    recur_2ndfunc();
return 0;
}

int recur_2ndfunc()
{
    printf("I was called by : recur_1stfunc,\t from : recur_2ndfunc! \n");
    recur_3rdfunc();
return 0;
}

int recur_3rdfunc()
{
    printf("I was called by : recur_2ndfunc,\t from : recur_3rdfunc! \n");
return 0;
}