#include "main.h"
/**
* _islower - Check Main
* @c: An input character
* Description: function uses _putchar function to print
* alphabet in lowercase 
* Return: 1 if it is lowercase or 0 if it is uppercase
*/
int _islower(int c)
{
char i;
int lower = 0;
for (i = 'a'; i <= 'z'; i++)
{
if (i == c)
lower = 1;
}
return (lower);
}
