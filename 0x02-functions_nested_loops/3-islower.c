#include "main.h"
/**
 * _islower - a fucntion that checks for lowercase char
 * @c: character
 * Return: 1 if int c is lowercase, 0 if not
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
