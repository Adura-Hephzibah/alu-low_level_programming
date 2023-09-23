#include <stdio.h>
/**
 *main - prints sum of even-valued Fionacci sequence up to 4,000,000
 *followed by a new line.
 *Return: 0
 */
int main(void)
{
	unsigned long a = 1, b = 2, c;
	int count = 0;

	printf("1, 2, ");

	while (count < 96)
	{
		c = a + b;

		printf("%lu, ", c);

		a = b;
		b = c;
		count++;
	}

	printf("\n");

	return (0);
}
