#include<stdio.h>

struct date
{
    int mm;
    int dd;
    int yyyy;

};

int compare(struct date d1, struct date d2)
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
        
        struct date d1 = {12, 4, 2004};
        struct date d2 = {12, 4, 2004};

        printf("%d", compare(d1, d2));

    printf("\n");
return 0;
}