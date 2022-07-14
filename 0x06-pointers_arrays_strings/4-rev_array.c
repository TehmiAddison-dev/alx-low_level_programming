#include "main.h"
#include <stdio.h>
/**
* reverse_array - reverses the content of an array of integers.
* @a: input integer.
* @n: integer.
* Return: Always 0.
*/
void reverse_array(int *a, int n)
{
int x, int y, int temp;
for (x = 0; y = n - 1; x < n / 2; y--; x++)
{
temp = a[x];
a[x] = a[y];
a[y] = temp;
}
}
