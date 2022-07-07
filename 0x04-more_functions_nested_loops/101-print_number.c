#include "main.h"
/**
 * print_number - prints a number with _putchar
 * @n: Number to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_number(int n)
{
int a, i, b;
unsigned int m, p;
a = 1;
if (n < 0)
{
n = n * -1;
b = 1;
}
m = n;
p = n;
while (m >= 10)
{
m = m / 10;
a = a * 10;
}
if (b == 1)
{
_putchar('-');
}
_putchar('0' + (p / a));
i = a / 10;
while (i >= 1)
{
_putchar('0' + (p / i) % 10);
i = i / 10;
}
}
