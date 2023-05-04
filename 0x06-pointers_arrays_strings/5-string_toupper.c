#include "main.h"
/**
  * string_toupper -  changes all lowercase letters of a string to uppercase
  *
  * @c : variable
  *
  * Return: char
  */
char *string_toupper(char *c)
{
	char *p = c;

	while (*p != '\0')
	{
		if (*p >= 97 && *p <= 122)
		{
			*p = *p - 32;
		}
		p++;
	}
	return (c);
}
