#include "3-calc.h"


int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);


/**
 * op_add - adds two integers.
 * @a: The first int.
 * @b: The second int.
 * Return: The sum.
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - subtrats two integer.
 * @a: The first int.
 * @b: The second int.
 * Return: The difference of a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiplies two integers.
 * @a: The first int.
 * @b: The second int.
 * Return: The product.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divides two integers.
 * @a: The first int.
 * @b: The second int.
 * Return: The quotient.
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - modulo two integers.
 * @a: The first int.
 * @b: The second int.
 * Return: The remainder .
 */
int op_mod(int a, int b)
{
	return (a % b);
}

