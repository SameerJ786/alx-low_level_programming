#include "main.h"
/**
 * main - a function that prints the alphabet in lowercase
 * return: 0 (success)
*/

void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
