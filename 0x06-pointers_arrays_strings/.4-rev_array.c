#include "main.h"
/**
  * rev_string - prints a string in reverce
  *
  * @s : pointer to the variable
  *
  * Return: void
  */
void rev_string(char *s)
{
	int len = 0, i;
	char c;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	s -= len;
	for (i = 0; i < (len / 2); i++)
	{
		c = *(s + i);
		*(s + i) = *(s + len - 1 - i);
		*(s + len - 1 - i) = c;
	}
}
