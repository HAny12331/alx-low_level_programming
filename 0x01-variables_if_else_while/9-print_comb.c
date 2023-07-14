#include <stdio.h>

/**
 * main - entry void
 *
 * Description: print numbers with space
 *
 * Return: always 0
 */
int main(void)
{
	int digit = 0;

	while (digit < 10)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}

		digit++;
	}
	putchar('\n');

	return (0);
}
