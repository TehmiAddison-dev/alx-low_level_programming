#include "main.h"
/**
* * _strcpy - copies the string pointed to by sr,
* @dest: variable holding the string.
* @src: variable holding the string.
* Return: Always 0.
*/
char *_strcpy(char *dest, char *src)
{
int a = 0;
while (src[a] != '\0')
{
dest[a] = src[a];
a++;
}
dest[a] = '\0';
return (dest);
}
