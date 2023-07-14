#include <stdio.h>

/**
 * main - acts as the starting point for program execution
 *
 * Return: 0  the value that the function will return when it is called
 */

int main(void)
{
	printf("size of a char: %lu bytes(s)", sizeof(char));
	printf("size of an int: %lu bytes(s)", sizeof(int));
	printf("size of a long int: %lu bytes(s)", sizeof(long int));
	printf("size of a long long int: %lu bytes(s)", sizeof(long long int));
	printf("size of a float: %lu bytes(s)", sizeof(float));
	return (0);
}
