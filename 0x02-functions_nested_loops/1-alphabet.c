#include "main.h"
#include <stdio.h>

/**
 * print_alphbet - utilizes on the _putchar function to
 *
 * Description: kepkfp
 *	 print the alphabet a20 - z
*/

void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z' ; ch++)
		_putchar(ch);
	_putchar('\n');
}
