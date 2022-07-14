#include "main.h"
/**
* _strcmp - compares two strings.
* s@1: first input variable.
* @s2: second input variable.
* Return: y.
*/
int _strcmp(char *s1, char *s2);
{
int x = 0, int y = 0;
for (; s1[x] == s2[x] && s1[x] != '\0' && s2[x] != '\0'; x++)
if (s1[x] != s2[x])
y = s1[x] - s2[x];
return (y);
}
