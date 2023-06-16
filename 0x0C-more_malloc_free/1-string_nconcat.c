#include <stdlib.h>
#include "main.h"

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
#include <stdlib.h>
#include <string.h>

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
unsigned int len1 = 0, len2 = 0;
char *result;

if (s1)
len1 = strlen(s1);
if (s2)
len2 = strlen(s2);

if (n < len2)
len2 = n;

result = malloc(sizeof(char) * (len1 + len2 + 1));

if (result == NULL)
return NULL;

if (s1)
memcpy(result, s1, len1);
if (s2)
memcpy(result + len1, s2, len2);

result[len1 + len2] = '\0';

return result;
}
