#include <stdio.h>
#include <stdlib.h>

/**		
* _atoi - converts a string to an integer		
* @s: string to be converted		
* Return: the int converted from the string		
*/
int multiply_numbers(int a, int b) 
{
return a * b;
}
int main(int argc, char *argv[]) 
{
if (argc != 3) 
{
printf("Error\n");
return 1;
}
int num1 = atoi(argv[1]);
int num2 = atoi(argv[2]);
int result = multiply_numbers(num1, num2);
printf("%d\n", result);
return 0;
}
