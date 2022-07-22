#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
* main - adds numbers
* @argc: number of arguments passed to the function
* @argv: argument vector of pointers to strings
* Return: 0 if no errors, else 1
*/

int main(int argc, char *argv[])
{
int n = 0, x, y;
for (x = 1; x < argc; x++)
{
for (y = 0; argv[x][y]; y++)
{
if (isdigit(argv[x][y]) == 0)
{
puts("Error");
return (1);
}
}
}
for (x = 1; x < argc; x++)
{
n += atoi(argv[x]);
}
printf("%d\n", n);
return (0);
}
