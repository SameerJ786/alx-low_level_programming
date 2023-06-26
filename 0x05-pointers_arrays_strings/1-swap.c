#include "main.h"
/**
 * swap_int - swpas the values of two integers
 * @a: parameter
 * @b: parameter two
*/
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
