#include "main.h"
/**
*_islower - tests whether a character is a lowercase alphabet.
* @c: character to test.
* Return: 1 if it is a lowercase alphabet, 0 if it is not a lowercase alphabet.
*/
int _islower(int i)
{
if (i >= 'a' && i <= 'z')
return (1);
else
return (0);
}
