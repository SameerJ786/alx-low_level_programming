#include <stdio.h>
/**
 * main - entry point
 * Return: 0 (success)
*/
int main(void)
{
	int first;
	int second;
	int third;

	for (first = 0; first < 8; first++)
	{
		for (second = first + 1; second < 9; second++)
		{
			for (third = second + 1; third < 10; third++)
			{
			putchar(first + '0');
			putchar(second + '0');
			putchar(third + '0');
			if (first < 7 || second < 8 || third < 9)
			{
				putchar(',');
				putchar(' ');
			}
			}
		}
	}
	putchar('\n');
	return (0);
}
