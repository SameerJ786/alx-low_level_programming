#include "main.h"
/**
 * leet - encodes a string into 1337
 * @s: strng to encode
 * Return: address of s
*/
char *leet(char *str)
{
	int i;
	int j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	int i = 0;
	while (str[i])
	{
		j = 0;
		while (j < 10)
		{
			if (str[i] == a[j])
			{
				str[i] = b[j];
			}
			j++;
		}
		i++;
	}
	return (str);
}
