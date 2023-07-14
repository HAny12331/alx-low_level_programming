#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single digits of base 10.
 *
 * Return: always 0
 */

int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		printf("%i", digit);
		digit++;
	}
	printf("\n");

	return (0);
}
