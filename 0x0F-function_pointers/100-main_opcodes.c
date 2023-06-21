#include <stdio.h>
#include <stdlib.h>

/**
 * print_opcodes - prints the opcodes of a function
 * @function: pointer to the function
 * @bytes: number of bytes to print
 */
void print_opcodes(void (*function)(), int bytes)
{
unsigned char *opcodes = (unsigned char *)function;
for (int i = 0; i < bytes; i++)
{
if (i == bytes - 1)
{
printf("%02hhx\n", opcodes[i]);
break;
}
printf("%02hhx ", opcodes[i]);
}
}


/**
 * main - entry point of the program
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
if (argc != 2)
{
printf("Error: Usage: %s <bytes>\n", argv[0]);
return (1);
}

int bytes = atoi(argv[1]);

if (bytes < 0)
{
printf("Error: Number of bytes must be non-negative\n");
return (2);
}

print_opcodes(main, bytes);

return (0);
}
