#include <stdio.h>
/**
* main - prints its name, followed by a new line.
* @argc: number of arguments passed to the function.
* @argv: arguent vector of pointers to strings
* Return: Always 0
*/
int main(int arg _attribute_((unused)), char *argv[])
{
argc--; /*added to pass checks*/
printf("%s\n", argv[0]);
return (0);  
}
