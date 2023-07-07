#include "main.h"

/**
 * get_endianness - returns the endianness of the system
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
unsigned int i = 1;
unsigned char *c = (unsigned char *)&i;
return (*c == 1);
}

