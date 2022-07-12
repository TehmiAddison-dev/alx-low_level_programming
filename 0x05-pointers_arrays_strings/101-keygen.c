#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - generates random valid passwords for the program.
* Return: Always 0.
*/
int main(void)
{
char password[84];
 int a = 0, b = 0, x, y;
srand(time(0));
while (b < 2772)
{
password[a] = 33 + rand() % 94;
b += password[a++];
}
password[a] = '\0';
if (b != 2772)
{
x = (b - 2772) / 2;
y = (b - 2772) / 2;
if ((b - 2772) % 2 != 0)
x++;
for (a = 0; password[a]; a++)
{
if (password[a] >= (33 + x))
{
password[a] -= x;
break;
}
}
for (a = 0; password[a]; a++)
{
if (password[a] >= (33 + y))
{
password[a] -= y;
break;
}
}
}
printf("%s", password);
return (0);
}
