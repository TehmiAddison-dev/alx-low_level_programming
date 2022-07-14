#include "main.h"
/**
* _strcat - concatenates two strings
* @src: src parameter.
* @dest: parameter to append. 
* Return: Always 0.
*/
char *_strcat(char *dest, char *src)
{
char *temp = dest;
while (*dest != '\0')
{
dest++;
}
while (*src != '\0')
{
*dest = *src;
dest++;
src++;
}
*dest = '\0';
return (temp); 
}
