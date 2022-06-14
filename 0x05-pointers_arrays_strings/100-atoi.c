#include <string.h>
#include <stdlib.h>


/**
 * _atoi - main function
 *
 * Return: the number
 */

int _atoi(char *s)
{

while (*p)
{
	if ( isdigit(*s) || ( (*s=='-'||*s=='+') && isdigit(*(s+1)) ))
	{

	long val = strtol(p, &s, 10);
	printf("%ld\n", val);
	return (val);
	}
	else
	{
		s++
	}
}
