#include <stdio.h>
/**
* main - prints the name number of arguments passed to it
* @argc: number of arguments passed tot the function
* @argv: argument vector of pointers to strings
* Return: Always 0.
*/
int main(int argc, char *argv[])
{
printf("%d\n", argc - 1);
argv[0] = 0;
return (0);
}
