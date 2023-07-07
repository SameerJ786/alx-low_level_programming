#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @x: The integer to compute the absolute of.
 * Return: The absolute value of x
*/
int _abs(int x)
{
	if (x < 0)
	{
		return (-x);
	}
	else
	{
		return (x);
	}
}
