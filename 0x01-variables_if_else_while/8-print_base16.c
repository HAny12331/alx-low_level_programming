#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print numbers and letters base of 16.
 *
 * Return: always 0
 */
int main(void)
{
	int digit = 48;

	while (digit <= 102)
	{
		putchar(digit);

		if (digit == 57)
			digit += 39;
		digit++;
	}
	putchar('\n');

	return (0);
}
