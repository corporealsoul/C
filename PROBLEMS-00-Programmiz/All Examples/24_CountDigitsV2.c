#include <stdio.h>

int main()
{
printf("\n\n");

	int number, remainder;
	int loop, count = 0;

	printf("Number : ");
	scanf("%d", &number);

	for (loop = number; loop > 0; loop = loop / 10)
	{

		remainder = loop % 10;
		printf("%d ", remainder);
		count ++;
	}
	printf("\n");
	printf("Digits : %d", count);

printf("\n\n");
return 0;
}