#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - alphabet except q and e
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int l;

		for (l = 97; l <= 122; l++)
		{
			if  ((l != 101) && (l != 113))
			putchar(l);
		}
		putchar('\n');

	return (0);
}
