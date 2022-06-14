#include <string.h>
#include <stdio.h>
#include <stdlib.h>


/**
 * _atoi - main function
 *
 * Return: the number
 */

int _atoi(char *s)
{

while (*s)
{
	if ( isdigit(*s) || ( (*s=='-'||*s=='+') && isdigit(*(s+1)) ))
	{

	long val = strtol(s, &s, 10);
	printf("%ld\n", val);
	return (val);
	}
	else
	{
		s++;
	}
}
