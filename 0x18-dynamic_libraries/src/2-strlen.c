
/**
 * _strlen - function to count a string length
 * @s: parameter to be counted
 * Return: returns the length
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
