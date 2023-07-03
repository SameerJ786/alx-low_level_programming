#include "main.h"
/**
 * _memset - function to fill the first @n bytes of memory
 * pointed to by @s with constant byte @b
 * @n: bytes of memory area pointed by @s
 * @s: with constant byte @b
 * @b: memory area pointer
 * Return: a pointer to the memory area @s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
