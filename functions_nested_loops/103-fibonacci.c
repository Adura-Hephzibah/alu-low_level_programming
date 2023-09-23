#include <stdio.h>
/**
 *main - prints sum of even-valued Fionacci sequence up to 4,000,000
 *followed by a new line.
 *Return: 0
 */
int main(void)
{
	long int fib_nums[3];
	long int evenTotal = 0;

	fib_nums[0] = 1;
	fib_nums[1] = 2;

	while (fib_nums[1] < 4000000)
	{
		if (fib_nums[1] % 2 == 0)
		{
			evenTotal += fib_nums[1];
		}
		fib_nums[2] = fib_nums[0] + fib_nums[1];
		fib_nums[0] = fib_nums[1];
		fib_nums[1] = fib_nums[2];
	}

	printf("%ld", evenTotal);
	printf("\n");

	return (0);
}
