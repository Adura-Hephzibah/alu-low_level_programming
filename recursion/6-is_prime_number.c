#include "main.h"
/**
  *check_prime - divide by higher divisor
  *@n: number to check
  *@divisor: divisor number
  *Return: 1 if prime, 0 if not
  */
int check_prime(int n, int divisor)
{
	if (n == divisor)
		return (1);
	if (n % divisor == 0)
		return (0);
	return (check_prime(n, divisor + 1));
}


/**
  *is_prime_number - test if prime
  *@n: number
  *Return: 1 if prime, 0 if not
  */

int is_prime_number(int n)
{
	int divisor = 3;

	if (n % 2 == 0 || n < 2)
		return (0);
	if (n == 2)
		return (1);

	return (check_prime(n, divisor));
}
