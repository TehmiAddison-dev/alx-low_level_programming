#include "3-calc.h"
/**
* op_add - adds two numbers
* @a: first number
* @b: second number
* Return: sum of the two numbers
*/
int op_add(int a, int b)
{
return (a + b);
}
/**
* op_sub - subtracts two numbers
* @a: first number
* @b: second number
* Return: difference of two numbers
*/
int op_sub(int a, int b)
{
return (a - b);
}
/**
* op_mul - multiplies two numbers
* @a: first number
* @b: second number
* Return: result of multiplied numbers
*/
int op_mul(int a, int b)
{
return (a * b);
}
/**
* op_div - divides two numbers
* @a: first number
* @b: second number
* Return: result of divided numbers
*/
int op_div(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
return (a / b);
}
/**
* op_mod - divides two numbers and returns the remainder
* @a: first number
* @b: second number
* Return: remainder of the divided numbers
*/
int op_mod(int a, int b)
{
if (b == 0)
{
printf("Error\n");
exit(100);
}
else
{
return (a % b);
}
}
