#include<stdio.h>

typedef struct date
{
    int mm;
    int dd;
    int yyyy;

}DTE;

int compare(DTE d1, DTE d2)
{
    if ((d1.yyyy == d2.yyyy) && (d1.mm == d2.mm) && (d1.dd == d2.dd))
    {
        return 0;
    }

    if(d1.yyyy > d2.yyyy)
    {
        return 1;
    }
    else if (d1.yyyy < d2.yyyy)
    {
        return 0;
    }

    else if (d1.mm > d2.mm)
    {
        return 1;
    }
    else if (d1.mm < d2.mm)
    {
        return 0;
    }

    else if (d1.dd > d2.dd)
    {
        return 1;
    }
    else if (d1.dd < d2.dd)
    {
        return 0;
    }

}

int main()
{
    printf("\n");
        
        DTE d1 = {12, 4, 2004};
        DTE d2 = {12, 4, 2004};

        printf("%d", compare(d1, d2));

    printf("\n");
return 0;
}