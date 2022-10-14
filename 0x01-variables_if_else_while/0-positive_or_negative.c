#include <stdlib.h>
#include <time.h>
/**
* main -Entry
*Return: Always 0
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive")
	else if (n == 0)
		printf("%d id zero");
	else
		printf("%d is negative");
	return (0);
}
