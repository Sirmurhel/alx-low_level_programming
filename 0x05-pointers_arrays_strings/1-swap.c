#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: pointer to number to be changed
 * @b: pointer to number to be changed
 */
void swap_int(int *a, int *b)
{
	int k;

	k = *a;
	*a = *b;
	*b = k;
}
