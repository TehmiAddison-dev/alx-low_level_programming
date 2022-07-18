#include "main.h"
#include <stdio.h>
/**
 * _strstr - Locates a substring..
 * @haystack: String to be compared
 * @needle: Substring to be located
 * Return: NULL
 */
char *_strstr(char *haystack, char *needle)
{
int i;
int j;
int n;
for (i = 0; haystack[i] != '\0'; i++)
{
for (n = i, j = 0; needle[j] != '\0'; j++, n++)
{
if (haystack[n] != needle[j] || haystack[n] == '\0')
{
break;
}
}
if (needle[j] == '\0')
{
return (haystack + i);
}
}
return (NULL);
}
