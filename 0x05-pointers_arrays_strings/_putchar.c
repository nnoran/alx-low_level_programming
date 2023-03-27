#include "math.h"
#include <unistd.h>

/**
* _putchar - writes char to stout
* Description: prints chars
* Return: Always 0 (Succes)
*/
int _putchar(char)
{
	char c;

	return (write(1, &c, 1));
}
