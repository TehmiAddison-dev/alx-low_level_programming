#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - generates random valid passwords for the program.
* Return: Always 0.
*/
int main(void)
{
int a;
int b = 0;
int randnum;
char p[100];
srand(time(NULL));
for (i = 0; i < 100; i++)
{
randnum = random() % 127;
if  (randnum > 32)
{
p[b] = randnum;
b++;
}
}
p[b] = '\0';
printf("%s", p);
return (0);
}
