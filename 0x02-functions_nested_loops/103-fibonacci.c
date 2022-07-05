#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int a;
long int fibonacci[50], sum = 2;
fibonacci[0] = 1;
fibonacci[1] = 2;
for (a = 2; a < 50; a++)
{
fibonacci[a] = fibonacci[a - 1] + fibonacci[a - 2];
if ((fibonacci[a] % 2) == 0 && fibonacci[a] < 4000000)
sum += fibonacci[i];
}
printf("%ld\n", sum);
return (0);
}
