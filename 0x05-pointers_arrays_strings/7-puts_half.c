#include "main.h"
/**
  * puts_half - prints half a string
  *
  * @str : pointer to the variable
  *
  * Return : always 0
  */
void puts_half(char *str)
{
	int len = 0, i, bigin;

	while (*str != '\0')
	{
		len++;
		str++;
	}
	str -= len;
	if (len % 2 != 0)
	{
		bigin = (len - 1) / 2;
	}
	else
	{
		bigin = len / 2;
	}
	for (i = bigin; i < len; i++)
	{
		_putchar(*(str + i));
	}
	_putchar('\n');
}
