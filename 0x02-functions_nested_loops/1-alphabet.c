#include "math.h"

/**
 * print_alphabet - lower case alphabet
 *Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int a;

	for (a = 97; a <= 122; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
