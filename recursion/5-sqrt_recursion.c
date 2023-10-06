#include "main.h"
/**
 * find_rt - find square root of n,
 * @n: number to search squere root
 * @root: test this root starting from 0
 * Return: natural square root, or -1 if not natural root
 */

int find_rt(int n, int root)
{
	if (root * root > n)
		return (-1);

	if (root * root == n)
		return (root);

	return (find_rt(n, root + 1));
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: integer
 *
 * Return: returns the natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_rt(n, 0));
}
