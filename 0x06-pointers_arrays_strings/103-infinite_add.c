#include "main.h"
#include <stdio.h>
/**
* infinite_add - Adds two numbers
* @x: first input string
* @y: second input string
* @r: pointer to buffer where result is stored
* @size_r: requested size for the buffer
* Return: pointer to buffer where result is stored
*/
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int x, y, z;
x = y = n = 0;
if ((n1[0] - '0') + (n2[0] - '0') >= 10)
{
r[0] = 1 + '0';
y = 1;
}
while (x < size_r && (n1[x] != '\0' || n2[x] != '\0' || r[y] != '\0'))
{
if ((n1[x + 1] - '0') + (n2[x + 1] - '0') >= 10)
z = 1;
else
z = 0;
r[y] = (n1[x] - '0') + (n2[x] - '0') + z;
r[y] = r[y] % 10 + '0';
x++;
y++;
if (n1[x] == '\0' || n2[x] == '\0')
r[y] = '\0';
}
r[y] = '\0';
return (r);
}
