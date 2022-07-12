#include "main.h"
/**
* _puts - prints a string, followed by a new line, to stdout.
* @str: input a string.
* Return: A;ways 0.
*/
void _puts(char *str)
{
int msg;
for (msg = 0; *(str + msg) != '\0'; msg++)
{
_putchar(str[msg]);
}
_putchar('\n'); 
}
