#include "main.h"
/**
 * print_numbers - prints digits
 *
 * Return: nothing
 */
void print_numbers(void)
{
	for (i = 0; i < 10; i++)
	{
		_putchar(i % 10 + '0');
	}
	_putchar('\n');
}
