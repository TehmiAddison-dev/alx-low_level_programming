#include "main.h"
/**
* _strcat - concatenates two strings
* @src: src parameter.
* @dest: parameter to append. 
* Return: pointer ti the resulting string dest.
*/
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*dest)
		dest++;

	while (*src)
		*dest++ = *src++;

	*dest = '\0';
	return (temp);
}
