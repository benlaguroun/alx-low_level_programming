#include <stdio.h>

void first(void) __attribute__ ((constructor));

/**
 * _constructor - executes before main.
 * Return: void 
 */
void first(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

