#include <stdio.h>

int primeFunction(int, int);

int main()
{
printf("\n");
	int base = 2, limit = 20;

	primeFunction(base, limit);

printf("\n");
return 0;
}

int primeFunction(int base, int limit){
	int outerLoop, inerLoop;

	for (outerLoop = base; outerLoop < limit; outerLoop++) {
		int primeFlag = 1;

		for (inerLoop = 2; inerLoop < outerLoop; inerLoop++) {

			if (outerLoop % 2 == 0) {
				primeFlag = 0;
			}
		}
		if (primeFlag == 0) {
			printf("%d ,", outerLoop);
		}
	}
}
