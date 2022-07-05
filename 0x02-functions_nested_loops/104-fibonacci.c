#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int a;
int fibonacci[98], sum = 2;
fibonacci[0] = 1;
fibonacci[1] = 2;
for (a = 2; a < 98; a++)
{
fibonacci[a] = fibonacci[a - 1] + fibonacci[a - 2];
if (fibonacci[a] % 2 == 0 && fibonacci[a] < 98)
sum += fibonacci[a];
}
printf("%d\n", sum);
return (0);
}
