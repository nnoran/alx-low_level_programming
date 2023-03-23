#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints nums to 98
 * @n - num count
 */
void print_to_98(int n)
{
	int i;

	n = getchar();
	for (i = n; i <= 98; i++)
	{
		printf("%d, ", i);
	}
}

