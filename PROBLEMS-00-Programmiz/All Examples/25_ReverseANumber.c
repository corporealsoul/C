#include <stdio.h>

int main()
{
printf("\n\n");

	int number, remainder, store = 0;
	int loop;

	printf("Number : ");
	scanf("%d", &number);

	for (loop = 0; number > 0; loop++)
	{
		remainder = number % 10;
		store = (store * 10) + remainder;
		
		number = number / 10;
	}
	printf ("Reveresed : %d ", store);

printf("\n\n");
return 0;
}