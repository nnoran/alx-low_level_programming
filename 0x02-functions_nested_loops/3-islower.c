#include "math.h"
#include <stdlib.h>
/**
 *  _islower - checks for lower case chars
 *  task 3
 *  @c: char to be checked
 *  Return: 1 if char is lower case and 0 otherwise
 */
int _islower(int c)
{
	int c;

	c = getchar();
		if (islower(c))
		{
			return (1);
		} else
			return (0);
}
