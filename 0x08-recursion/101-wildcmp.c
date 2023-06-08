#include "main.h"

/**
 * wildcmp - Compare strings
 * @s1: pointer to string params
 * @s2: pointer to string params
 * Return: 1 if the strings match, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
    // Base cases: both strings are empty
    if (*s1 == '\0' && *s2 == '\0')
        return 1;

    // If the current characters match or the second string has a wildcard
    if (*s1 == *s2 || *s2 == '*')
    {
        // Recursive case 1: move to the next character in both strings
        if (*s1 != '\0' && *s2 != '\0')
            return wildcmp(s1 + 1, s2 + 1);

        // Recursive case 2: check if the second string can match the rest of the first string
        if (*s1 == '\0' && *s2 == '*')
            return wildcmp(s1, s2 + 1);
        
        // Recursive case 3: check if the first string can match the rest of the second string
        if (*s1 != '\0' && *s2 == '*')
            return wildcmp(s1 + 1, s2);
    }

    return 0;
}
