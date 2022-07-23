#include "main.h"
#include <stdlib.h>
/**
* create_array - creates an array of chars,
* and initialize it with a specific char.
* @size: size of the array
* @c: char to initialize the array with
* Return: pointer to he array of chars
*/
char *create_array(unsigned int size, char c)
{
char *p;
unsigned int i;
if (size > 0)
{
p = malloc(size * sizeof(char));
if (p == NULL)
return (NULL);
}
else
return (NULL);
for (i = 0; i < size; i++)
p[i] = c;
return (p);
}
