#include "main.h"
int check_prime(int n, int k);
/**
 * is_prime_number - returns 1 if the input is a prime number, else return 0
 * @n: number to check
 * Return: 1 if n is a prime, return 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n - 1));
}

/**
 * check_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @k: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int check_prime(int n, int k)
{
	if (k == 1)
		return (1);
	if (n % k == 0 && k > 0)
		return (0);
	return (check_prime(n, k - 1));
}
