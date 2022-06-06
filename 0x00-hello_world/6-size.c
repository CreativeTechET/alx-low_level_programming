#include <stdio.h>

/**
 * main - Entry point 
 *
 * Return: returns 0
 */

int main(void)
{
	char str[] = "Size of a";
	char str2[] = "Size of an";
	
	int a = 1;
	long int b = 2;
	long long int c = 3;
	char dd[] = "A";
	float e = 4.5;

	printf("%s char is %d \n", str, sizeof(char));

	return (0);
}
