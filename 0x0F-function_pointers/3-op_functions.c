#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * op_add - function adding 2 integer numbers
 * @a: the first integer number
 * @b: the second integer number
 * Return: the sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function subtract 2 integers numbers
 * @a: the first integer number
 * @b: the second integer number
 * Return: the difference of a and b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function multiply 2 integer numbers
 * @a: the first integer number
 * @b: the second integer number
 * Return: the product of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function divid 2 integer numbers
 * @a: the first integer number
 * @b: the second integer number
 * Return: the division of a and b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - function return the reminder of the division of a by b 
 * @a: the first integer number
 * @b: the second integer number
 * Return: the reminder of the division of a by b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
