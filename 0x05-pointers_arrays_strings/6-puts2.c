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
	if (len % 2 == 0)
	{
		len = len / 2 + 1;
	}
	else
	{
		len = len / 2;
	}
	for (i = 0; i < len; i++)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
