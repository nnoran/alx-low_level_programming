#include "math.h"

/**
 * print_sign - prints a number's sign
 * @n: number whose sign is to be checked
 * Return: 1 if n is greater than 0, 0 if n is zero,-1 if n is less than zero.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		printf("+");
		return (1);
	}
	else if (n == 0)
	{
		printf("0");
		return (0);
	}
	else if (n < 0)
	{
		printf("-");
		return (-1);
	}
}
