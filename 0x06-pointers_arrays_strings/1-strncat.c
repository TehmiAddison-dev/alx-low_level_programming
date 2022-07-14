#include "main.h"
/**
* _strncat - concatenates two strings.
* @dest: varaiable to hold string.
* @src: variable to hold string.
* @n: integer.
* Return: Always 0.
*/
char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0, i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
