#include "main.h"
/**
 * _strncat - concats two strings
 * @src: The source of strings
 * @dest: the destination of string
 * @n: the length of int
 * Return: pointer of result to @dest
*/
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		continue;
	}
	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = ''\0';
	return (dest);
}
