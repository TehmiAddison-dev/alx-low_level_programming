#include "main.h"
/**
* puts2 - prints every other character of a string,
* starting with the first character,
* followed by a new line.
* @str: input variable.
* Return: Always 0.
*/
void puts2(char *str)
{
int a = 0;
int i;
while (str[a] != '\0')
{
a++;
}
for (i = 0; i < a; i+=2)
{
_putchar(str[i]);
}
_putchar('\n'); 
}
