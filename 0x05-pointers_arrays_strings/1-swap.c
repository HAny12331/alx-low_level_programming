#include "main.h"

/**
 * swap_int - swaps that values of two integers 
 * busing two input parameters
 *
 * @a: intput parameter 1
 * @b: input parameter 2
 *
 * Return: nothing
*/

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
