#include "main.h"
		
/**
* _isalpha - alphabetic character
* @c: character to checked
* Return: 1 if c is a letter, 0 otherwise
*/
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}

