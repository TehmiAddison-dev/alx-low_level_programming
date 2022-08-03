#include "function_pointers.h"
/**
* array_iterator - executes a function on each element of an array
* @array: input array
* @size: size of the array
* @action: pointer to the function
* Return: Nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
if (action == NULL || array == NULL)
while (size-- > 0)
{
action(*array);
array++;
}
}
