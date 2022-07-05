#include <stdio.h>
/**
* main - Entry point
* Return: Always 0 (Success)
*/
int main(void)
{
int a;
unsigned long i, j, k;
unsigned long m, n, o, carry;
a = 0;
i = 0;
j = 1;
for (a = 1; a <= 91; a++)
{
k = i + j;
i = j;
j = k;
printf("%lu, ", k);
}
m = i % 1000;
i = i / 1000;
n = j % 1000;
j = j / 1000;
while (a <= 98)
{
carry = (m + n) / 1000;
o = (m + n)-carry * 1000;
k = (i + j)+carry;
m = n;
n = o;
i = j;
j = k;
if (o >= 100)
printf("%lu%lu", k, o);
else
printf("%lu0%lu", k, o);
if (a != 98)
printf(", ");
a++;
}
putchar('\n');
return (0);
}
