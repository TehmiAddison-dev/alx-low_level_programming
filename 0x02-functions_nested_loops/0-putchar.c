#include "main.h"
/**
* main - prints the word "_putchar", followed by a new line.
* Return: 0 on success.
*/
int main(void)
{
char _putchar[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
unsigned int i;
for (i = 0; i < sizeof(_putchar); i++)
{
_putchar(_putchar[i]);
}
_putchar('\n');
return (0);
}
