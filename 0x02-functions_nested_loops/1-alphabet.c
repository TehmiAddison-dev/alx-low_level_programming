#include "main.h"
/**
* main - prints the English alphabet from a to z.
* Description: It prints the alphabet in lowercase followed, by a new line.
* Return: 0 on success.
*/
void print_alphabet(void)
{
char i;
for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
