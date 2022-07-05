#include <stdio.h>
/**
* main -Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int a;
long int fibonacci[50];
fibonacci[0] = 1;
fibonacci[1] = 2;
printf("%ld, %ld, ", fibonacci[0], fibonacci[1]);
for (a = 2; a < 50; a++)
{
fibonacci[a] = fibonacci[a -1] + fibonacci[a - 2];
if (a ==49)
printf("%ld\n", fibonacci[a]);
else
printf("%ld, ", fibonacci[a]);
}
return (0);
}
