#include "main.h"

/**
 * _strlen - returns string's length
 * @s: char to check
 * Return: string length
 */
int _strlen(char *s)
{
	int a = 0;

		for (; s++;)
			a++;
	return (a);
}
