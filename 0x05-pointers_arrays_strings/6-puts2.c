#include "main.h"
/**
  * puts2 - prints every other character of a string
  *
  * @str : pointer to the variable
  *
  * Return : always 0
  */
void puts2(char *str)
{
	int len = 0, i;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= len;
	for (i = 0; i <= len / 2; i++)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
