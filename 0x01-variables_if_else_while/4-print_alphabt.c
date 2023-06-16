#include <stdio.h>
/**
* main - write lowercase alphabets excluding q and e
* Return: 0 (success)
*/
int main(void)
	{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
		putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
	}
