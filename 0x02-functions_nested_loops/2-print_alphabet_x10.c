#include "school.h"
/**
* main - repeats the print_alphabet 10 times.
* Return: 0 on sucess.
*/
int main(void)
{
int i; int c;
for (i = 0; i < 10; i++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
