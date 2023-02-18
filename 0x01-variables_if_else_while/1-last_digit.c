#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = (n % 10);
	if (k > 5)
	printf("the last digit of %d is %d and is greater 5\n", n, k);
	else if (k == 0)
		printf("the last of digit %d is %d and is zero\n", n, k);
	else if (k < 6)
		printf("the last digit %d is %d and is less than six not zero\n", n, k);

	return (0);
}
