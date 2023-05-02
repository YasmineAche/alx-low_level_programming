#include "main.h"
/**
  * _puts -calculate the length of a str
  *
  * @str : pointer to the variable
  *
  * Return: void
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
