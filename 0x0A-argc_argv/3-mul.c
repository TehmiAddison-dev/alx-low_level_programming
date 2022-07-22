#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers
* @argc: number of arguments passed to the function
* @argv: argument vector of pointers to strings
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
int i, j;
i = j = 0;
if (argc == 3)
{
i = atoi(argv[1]);
j = atoi(argv[2])
printf("%d\n", i * j);
return (0);
}
else
printf("Error\n");
return (1);
}

