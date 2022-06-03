#include <stdio.h>
#include <stdlib.h>
#include <time.h>


/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{

	int n, lastDigit, zero;
	zero = 0;
	char str[15] = "Last digit of";

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	lastDigit = n % 10;
	if (lastDigit < 5)
	{
		printf("%s %d is %d and is less than 6 and not 0\n", str, n, lastDigit);
	}
	else if (lastDigit == zero)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastDigit);
	}
	else
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastDigit);
	}
	return (0);
}
