#include "main.h"

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 *
 * Return: the resulting square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return -1;
	return actual_sqrt_recursion(n, 0, n);
}

/**
 * actual_sqrt_recursion - helper function to recursively find the natural
 * square root of a number using binary search
 * @n: number to calculate the square root of
 * @start: starting point of the binary search
 * @end: ending point of the binary search
 *
 * Return: the resulting square root
 */
int actual_sqrt_recursion(int n, int start, int end)
{
	if (start > end)
		return -1;

	int mid = start + (end - start) / 2;

	if (mid * mid == n)
		return mid;
	else if (mid * mid > n)
		return actual_sqrt_recursion(n, start, mid - 1);
	else
		return actual_sqrt_recursion(n, mid + 1, end);
}
