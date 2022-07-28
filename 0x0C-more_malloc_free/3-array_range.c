#include <stdio.h>
#include <stdlib.h>
/**
* array_range - A function that creates an array of integers
* @min: min number to start
* @max: max number to start
* Return: pointer
*/
int *array_range(int min, int max)
{
int *s;
int diff, i;
if (min > max)
return (NULL);
diff = max - min;
s = malloc((diff + 1) * sizeof(int));
if (s == NULL)
return (NULL);
for (i = 0; i <= diff; i++)
s[i] = min++;
return (s);
}
