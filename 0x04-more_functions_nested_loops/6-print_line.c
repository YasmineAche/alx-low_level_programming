#include "main.h"
/**
 * print_line - prints digits
 *
 * @n: argument
 *
 * Return: nothing
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n && n > 0; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}
