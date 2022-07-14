#include "main.h"
/**
* rot13 - encodes a string using rot13.
* @s: inout character.
* Return: Always 0.
*/
char *rot13(char *s)
{
int x, y;
char r[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
char boolean;
for (x = 0; s[x] != '\0'; x++)
{
boolean = 0;
for (y = 0; alpha[y] != '\0' && boolean == 0; y++)
{
if (s[x] == alpha[y])
{
s[x] = r[y];
boolean = x;
}
}
}
return (s);
}
