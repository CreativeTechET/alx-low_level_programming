#include "main.h"

/**
 * leet - function to encode some carachter
 * @s: string
 * Return: returns the char
 */

char *leet(char *s)
{
	int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] == 'a' || s[i] == 'A')
		{
			s[i] = '4';
		}
		if (s[i] == 'e' || s[i] == 'E')
		{
			s[i] = '3';
		}
		if (s[i] == 'o' || s[i] == 'O')
		{
			s[i] = '0';
		}
		if (s[i] == 't' || s[i] == 'T')
		{
			s[i] = '7';
		}
		if (s[i] == 'l' || s[i] == 'L')
		{
			s[i] = '1';
		}
		else
		{
			s[i] = s[i];
		}
	}
	return (s);
}
