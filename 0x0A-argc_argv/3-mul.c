#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argv[1] && argv[2])
	{
		int res = argv[1] * argv[2];

		printf("%d", res);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

