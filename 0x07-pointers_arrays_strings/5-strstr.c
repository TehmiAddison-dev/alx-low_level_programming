#include "main.h" 
#include <stdio.h>
/**
* _strstr -  a function that locates a substring.
* @haystack: an input string to search in
* @needle: an input string to locate into string haystack
* Return: NULL
*/

char *_strstr(char *haystack, char *needle)
{
int a;
int b;
int c;
for (a = 0; haystack[a] != '\0'; a++)
{
for c = a, b = 0; needle[b] != '\0'; b++, c++)
{
if (haystack[c] != needle[b] || haystack[c] == '\0')
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
