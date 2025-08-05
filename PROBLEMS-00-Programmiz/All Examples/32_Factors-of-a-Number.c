#include <stdio.h>

int main()
{
printf("\n");
	int theNumber = 210;
	int loop;

	for (loop = 2; loop < theNumber; loop++) {
		if (theNumber % loop == 0) {
			printf("%d ", loop);
		}
	}
printf("\n");
return 0;
}
