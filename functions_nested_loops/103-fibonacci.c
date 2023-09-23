#include <stdio.h>
/**
 *main - prints sum of even-valued Fionacci sequence up to 4,000,000
 *followed by a new line.
 *Return: 0
 */
int main(void)
{
	long int fib_nums[] = {};
	int i;
	int evenTotal = 0;

	fib_nums[0] = 1;
	fib_nums[1] = 2;

	while (fib_nums[i] < 4000000)
	{
		fib_nums[i] = fib_nums[i - 1] + fib_nums[i - 2];

		if (fib_nums[i] % 2 == 0)
		{
			evenTotal += fib_nums[i];
		}
	}
	printf("%d", evenTotal);
	printf("\n");

	return (0);
}
