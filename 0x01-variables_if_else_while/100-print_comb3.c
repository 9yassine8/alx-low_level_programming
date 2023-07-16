#include <stdio.h>
/**
 * main - prints all possible different combinations of two digits
 *
 * Return: always 0
 */

int main(void)
{
	int i, j;

	for (i = 48 ; i <= 56 ; i++)
	{
		for (j = 49 ; j <= 57 ; i++)
		{
			if (j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if (i != 56 || j != 57)
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
