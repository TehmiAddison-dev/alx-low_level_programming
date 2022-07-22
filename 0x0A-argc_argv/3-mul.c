#include <stdio.h>
#include <stdlib.h>
/**
* main - multiplies two numbers
* @argc: number of arguments passed to the function
* @argv: argument vector of pointers to strings
* Return: Always 0.
*/

int main(int argc, char **argv)
{
int i, j, n;
if (argc != 3)
{
printf("Error\n");
return (1);
}
else
i = atoi(argv[1]);
j = atoi(argv[2]);
n = i * j;
printf("%d\n", n);
return (0);
}
}
