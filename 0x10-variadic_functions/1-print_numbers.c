#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - Prints numbers, with separator.
 * @separator: The string separator.
 * @n: The number of arguments.
 * @...: the integers to prints.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
va_list args;
unsigned int i;
va_start(args, n);
if (separator != NULL && n > 0) 
{
for (i = 0; i < n - 1; i++) 
{
printf("%d%s", va_arg(args, int), separator);
}
printf("%d", va_arg(args, int));
}
va_end(args);
printf("\n");
}
