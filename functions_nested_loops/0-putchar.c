#include "main.h"
/**
 *main - prints _putchar, followed by new line
 *
 *Return: 0
 */
int main(void)
{
char output[8] = "_putchar";
int i = 0;

for (i = 0; i < 8; i++)
{
_putchar(output[i]);
}
_putchar('\n');
return (0);
}
