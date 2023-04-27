#include "main.h"
/**
 * print_triangle - prints digits
 *
 * @size: argument
 *
 * Return: nothing
 */
void print_triangle(int size)
{
	int i, j;

	for (i = 0; i < size && size > 0; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			_putchar(' ');
		}
		for (j = 0; j <= i; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
