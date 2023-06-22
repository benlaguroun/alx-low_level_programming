#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - Prints strings,with separator.
 * @separator: The string separator.
 * @n: The number of arguments.
 * @...: the strings to print.
 * Return: void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int index;
va_start(args, n);
for (index = 0; index < n; index++)
{
char *str = va_arg(args, char *);
if (str == NULL)
printf("(nil)");
else
printf("%s", str);
if (separator != NULL && index < n - 1)
printf("%s", separator);
}
printf("\n");
va_end(args);
}


