#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print single numbers by putchar
 *
 * Return: always 0
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}
