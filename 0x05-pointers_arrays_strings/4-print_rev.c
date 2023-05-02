#include "main.h"
/**
  * print_rev - prints a string in reverce
  *
  * @s : pointer to the variable
  *
  * Return: void
  */
void print_rev(char *s)
{
	int len = 0, i;

	while (*s != '\0')
	{
		s++;
		len++;
	}
	s--;
	for (i = 0; i < len; i++)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
