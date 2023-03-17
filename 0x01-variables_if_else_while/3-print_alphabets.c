#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - printing alphabets
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l , u
		;
	for (l = 97; l <= 122; l++)
	{
		putchar(l);
	} for (u = 65; u <= 90; u++)
	{
		putchar(u);
	}
		putchar('\n');
	return (0);
}
