#include "main.h"
/**
 * _strncpy - function that copys a string
 * @src: the source of strings
 * @dest: destination of the string
 * @n: length of int
 * Return: pointer to resulting string dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return(dest);
}
