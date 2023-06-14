#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
* check_num - check - string there are digit
* @str: array str
* Return: Always 0 (Success)
*/
int main(int argc, char *argv[]) 
{
int sum = 0;
for (int i = 1; i < argc; i++) 
{
for (int j = 0; argv[i][j] != '\0'; j++) 
{
if (!isdigit(argv[i][j])) 
{
printf("Error\n");
return 1;
}
}
int num = atoi(argv[i]);
if (num > 0) 
{
sum += num;
}
}
printf("%d\n", sum);
return 0;
}
