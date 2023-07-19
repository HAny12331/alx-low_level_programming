#include <stdio.h>

/**
 * main - entry point
 *
 * Description: prints all letters except e and q
 *
 * Return: always 0
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}