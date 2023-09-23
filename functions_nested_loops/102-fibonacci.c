#include <stdio.h>
/**
 *main - prints the first 50 Fibonacci numbers, starting with 1 and 2,
 *followed by a new line.
 *Return: 0
 */
int main(void)
{
	long int fib_nums[50];
	int i;

	fib_nums[0] = 1;
	fib_nums[1] = 2;

	for (i = 2; i < 50; i++)
	{
		fib_nums[i] = fib_nums[i - 1] + fib_nums[i - 2];
	}

	for (i = 0; i < 49; i++)
	{
		printf("%ld, ", fib_nums[i]);
	}
	printf("%ld, ", fib_nums[49]);
	printf("\n");

	return (0);
}
