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
	int i;
	int j;
	int z;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (z = i, j = 0; needle[j] != '\0'; j++, z++)
		{
			if (haystack[z] != needle[j] || haystack[z] == '\0')
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
