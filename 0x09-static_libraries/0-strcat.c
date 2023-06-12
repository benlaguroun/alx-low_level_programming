#include <stdio.h>

/**
* _strcat - concatenates two strings
* @dest: destination string
* @src: source string
* Return: pointer to the resulting string
*/
char *_strcat(char *dest, const char *src)
{
	char *ptr = dest;

	while (*ptr != '\0')
		ptr++;

	while (*src != '\0') {
		*ptr = *src;
		ptr++;
		src++;
	}

	*ptr = '\0';

	return dest;
}

int main(void)
{
	char str1[50] = "Hello, ";
	char str2[] = "world!";

	_strcat(str1, str2);
	printf("%s\n", str1);

	return 0;
}
