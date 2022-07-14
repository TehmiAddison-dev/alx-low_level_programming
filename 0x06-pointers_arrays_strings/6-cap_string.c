#include "main.h"
#include <stdio.h>
/**
* cap_string - capitalizes all words of a string.
* @s: input character.
* Return: s.
*/
char *cap_string(char *)
{
int x, y;
char temp[] = " \t\n,;.!?\"(){}";
x = 1;
if (s[0] >= 'a' && s[0] <= 'z')
s[0] -= ('a' - 'A');
while (s[x] != '\0')
{
for (y = 0; temp[y] != '\0'; y++)
if (s[x - 1] == temp[y] && (s[x] >= 'a' && s[x] <= 'z'))
s[x] -= ('a' - 'A');
x++;
}
return (s);
}
