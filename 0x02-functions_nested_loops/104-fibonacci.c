#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int a;
int fibonacci[98];
fibonacci[0] = 1;
fibonacci[1] = 2;
printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);
for (a = 2; a < 98; a++)
{
fibonacci[a] = fibonacci[a - 1] + fibonacci[a - 2];
if (a == 98)
printf("%ld\n", fibonacci[a]);
else
printf("%ld, ", fibonacci[a]);
}
return (0);
}
