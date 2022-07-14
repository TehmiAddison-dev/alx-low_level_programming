#include "main.h"
/**
* _strcat - concatenates two strings
* @src: src parameter.
* @dest: parameter to append. 
* Return: pointer ti the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
		x++;
	while (src[y] != '\0')
	{
		dest[x] = src[y];
		y++;
		x++;
	}
	return (dest);
}
