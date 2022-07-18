#include <stdio.h>
#include "main.h" 
/**
* _strstr -  a function that locates a substring.
* @haystack: an input string to search in
* @needle: an input string to locate into string haystack
* Return: 0.
*/
char *_strstr(char *haystack, char *needle)
{
int i;
int j;
for (i = 0; haystack[i] != '\0';)
{
for (j = 0; needle[j] != '\0'; j++)
{
if (needle[j] != haystack[i + j])
{
break;
}
}
if (needle[j] == '\0')
{
return (haystack[i]);
}
i++;
}
return ('\0');
}
