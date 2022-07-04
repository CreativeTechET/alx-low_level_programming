#include <stdio.h>

#define _FILE_

/**
 * main - Entry POint
 * @argc: size of arg
 * @argv: array of arg
 * Return: success
 */

int main(int argc, char *argv[])
{
	printf("%s\n", __BASE_FILE__);
	return (0);
}
