#include "main.h"
/**
* leet - encodes a string into 1337.
* @s: input character.
* Return: Always 0.
*/
char *leet(char *s)
{
int x = 0, y;
char leet[8] = {'O', 'L', '?', 'E', 'A', '?', '?', 'T'};
while (s[x])
{
for (y = 0; y <= 7; y++)
{
if (s[x] == leet[y] || s[x] - 32 == leet[y])
s[x] = y + '0';
}
x++;
}
return (s);
}
