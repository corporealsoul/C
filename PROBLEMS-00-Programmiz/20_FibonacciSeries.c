#include <stdio.h>

int main()
{
printf("\n\n");

	printf("WAPIC - To print the series till Count ... \n\n");

	int i, count = 20;
	int past = 0, present = 1, next;

	printf("%d ", past);

	for (i = 1; present <= count; i++)
	{
		printf("%d ", present);

		next = past + present;

		past = present;
		present = next;
	}

printf("\n\n");
return 0;
}