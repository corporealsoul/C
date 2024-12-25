#include<stdio.h>

int main()
{
printf("\n\n");

	int no;
	int i, count = 5;
	int store = 1;

	for (i = 1; i <= count; i++)
	{
		store = store * i;
	}
	printf("Factorials of %d is : %d", count, store);

printf("\n\n");
return 0;
}