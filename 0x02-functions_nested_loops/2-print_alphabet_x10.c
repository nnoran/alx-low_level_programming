#include "main.h"
/**
* print_alphabet - lower case alphabet
*Return: Always 0 (Success)
*/
void print_alphabet(void)
{
	char letter;
	int i;

	for (i = 0; i <= 9; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
	}
	_putchar('\n');
}
