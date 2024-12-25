#include <stdio.h>

int digits(int);

int digits(int number)
{
	int count = 0;
	do
	{
		number = number / 10;
		count ++;
	} while (number > 0);
	
	printf("\n");
	printf("Digits : %d", count);
return 0;
}

int main()
{
printf("\n\n");

	int number;

	printf("Number : ");
	scanf("%d", &number);

	digits(number);

printf("\n\n");
return 0;
}

