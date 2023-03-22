#include "math.h"

/**
 * main - checks for lower case letters
 * task 3
 * Return: 1 if char is lowercase and 0 otherwise
 */
int main(void)
{
	int r;

	r = _islower('H');
	_putchar(r + '0');
	r = _islower('o');
	_putchar(r + '0');
	r = _islower(108);
	_putchar(r + '0');
	_putchar('\n');
	return (0);
}

