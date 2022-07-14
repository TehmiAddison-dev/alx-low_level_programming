#include "main.h"
/**
* _strncat - concatenates two strings.
* @dest: varaiable to hold string.
* @src: variable to hold string.
* @n: integer.
* Return: Always 0.
*/
char *_strncat(char *dest, char *src, int n);
{
int x = 0;
int y = 0;
while (dest[x] != '\0')
x++;
while (src[y] != '\0' && y < n)
{
dest[x] = src[y];
y++;
x++;
}
return (dest);
}
