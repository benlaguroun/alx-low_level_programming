#include "main.h"
/**
* _strstr - Entry point
* @haystack: input
* @needle: input
* Return: Pointer to the first occurrence of needle in haystack, or NULL if needle is not found
*/
char *_strstr(char *haystack, char *needle)
{
while (*haystack != '\0')
    {
        char *l = haystack;
        char *p = needle;
    }
        while (*l == *p && *p != '\0')
        {
            l++;
            p++;  
  	}

if (*p == '\0')
  return haystack;

  haystack++;
}
return NULL;
}
