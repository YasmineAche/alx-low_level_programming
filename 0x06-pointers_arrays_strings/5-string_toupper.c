#include "main.h"
/**
  * string_toupper -  changes all lowercase letters of a string to uppercase
  *
  * @c : variable
  *
  * return: char
  */
char *string_toupper(char *c)
{
	int i = 0;

	while (*c != '\0')
	{
		c[i] = c[i] - 32;
	}
	return (c);
}
