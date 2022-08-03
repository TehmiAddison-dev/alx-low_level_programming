#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
* get_op_func - decides which math to use based on the operator
* @s: pointer to string
* Return: result of the operation
*/
int (*get_op_func(char *s))(int, int)
op_t ops[] = {
        {"+", op_add},
        {"-", op_sub},
        {"*", op_mul},
        {"/", op_div},
        {"%", op_mod},
        {NULL, NULL}
    };
    int i;
i = 0;
while (ops[i].op)
	{
		if (strcmp(s, ops[i].op) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);
}

