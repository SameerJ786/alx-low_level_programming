#include "main.h"
/**
 * _isupper - Checks if letters are uppercase
 * @c: parameter
 * Return: 1 if uppercase
 * 0 if not
*/
int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
