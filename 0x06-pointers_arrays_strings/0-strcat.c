#include "main.h"
/**
 * _strcat - concat 2 strings
 * @dest: The destination of strings
 * @src: The source of string
 * Return: Pointer to the resulting string @dest
*/
char _*strcat(char *dest, char *src)
{
	int i;
	int len;

	i = 0;
	len = 0;
	while (dest[len])
	{
		len++;
	}
	while (src[i])
	{
		dest[len + 1] = src[i];
		i++;
	}
	dest[len + 1] = '\0';
	return (dest);
}
