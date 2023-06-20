#include "main.h"
/**
 * print_alphabet_x10 - a function that prints the alphabet 10x
 * Return: x10 a-z
*/
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
