#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n element of an array of ints
 * @a: int
 * @n: int
 */
void print_array(int *a, int n)
{
	int x;

	for (x = 0; x < n; x++)
		if (x != n - 1)
			printf("%d", a[x]);
	printf("\n");
}

