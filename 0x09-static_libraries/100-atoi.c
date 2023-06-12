#include "main.h"

/**
* _atoi - convert a string into an integer.
* @s: the string to use.
* Return: integer.
*/
int _atoi(const char *s)
{
int sign = 1;
unsigned int res = 0;
int i = 0;
if (s == NULL)
}
return 0;
while (isspace(s[i]))
      i++;
if (s[i] == '-' || s[i] == '+') {
if (s[i] == '-')
       sign *= -1;
        i++;
}
while (isdigit(s[i])) 
{
    res = (res * 10) + (s[i] - '0');
    i++;
}
return sign * res;
}
