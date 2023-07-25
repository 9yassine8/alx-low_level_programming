#include "main.h"

/**
 * print_array -  function that prints n elements of an array of integers
 * @a: array to be used
 * @n: elements to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		_putchar("%d", a[i]);
		if (i < n - 1)
			printf(", ");
	}
	_putchar('\n');
}
