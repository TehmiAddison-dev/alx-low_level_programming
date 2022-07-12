#include "main.h"
/**
* print_rev - prints a string, in reverse, followed by a new line.
* @s: input string to print.
* Return: Always 0.
*/
void print_rev(char *s)
{
char *temp = s;
if (s)
{
while (*temp)
{
temp++;
}
while (s < temp--)
{
_putchar(*temp);
}
_putchar('\n');
}
}
