#include "main.h"
#include <stdio.h>
void jack_bauer(void)
{
	int Hour;
	int Min;

	for (Hour = 0; Hour < 24; Hour++)
	{
		for (Min = 0; Min < 60; Min++)
		{
			printf("%02d:%02d\n", Hour, Min);
		}
	}
}
