#include "main.h"
/**
* _strlen - returns the length of a string.
* @s: input a word'
* Return: Always 0.
*/
int _strlen(char *s)
{
int large = 0;
while (*(s + large) != '\0')
{
large++;
}
return (large);
}
