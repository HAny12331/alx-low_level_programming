#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all possible compinations
 *
 * Return: always 0
 */
int main(void)
{
	int firstDigit = 0;
	int seconDigit;

	while (firstDigit < 100)
	{
		seconDigit = firstDigit;
		while (seconDigit < 100)
		{
			if (seconDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((seconDigit / 10) + 48);
				putchar((seconDigit % 10) + 48);

				if (firstDigit != 98 || seconDigit != 98)
				{
					putchar(',');
					putchar(' ');
				}
			}
			seconDigit++;
		}
		firstDigit++;
	}
	putchar('\n');

	return (0);
}
