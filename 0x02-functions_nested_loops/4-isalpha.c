#include "math.h"
#include <stdlib.h>
/**
*  _isalpha - checks for alphabets
*  task 3
*  @c: char to be checked
*  Return: 1 if char is an alphabet and 0 otherwise
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	} else
		return (0);
}
