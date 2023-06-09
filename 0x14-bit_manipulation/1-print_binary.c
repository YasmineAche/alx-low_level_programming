#include "main.h"
/**
  * print_binary - fonction
  *
  * @n: variable
  *
  * Return: nothing
  */
void print_binary(unsigned long int n)
{
	int i, count = 0;
	unsigned long int var;

	for (i = 63; i >= 0; i--)
	{
		var = n >> i;
		if (var & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	if (!count)
	{
		_putchar('0');
	}
}
