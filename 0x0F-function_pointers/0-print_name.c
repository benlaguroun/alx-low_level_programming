#include "function_pointers.h"
#include <stdio.h>
/**
* print_name - printing a name
* @name: the string name
* @f: the pronting fuction pointer
* Return: nothing
**/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

