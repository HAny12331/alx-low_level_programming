#include "main.h"

/**
 * _puts - print a string, follwed by a newline to stdout
 *
 * @str: string parameter to print
 *
 * Return: nothing
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
	str++;
	}
	_putchar('\n');
}
