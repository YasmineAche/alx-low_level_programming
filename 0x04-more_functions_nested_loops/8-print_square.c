#include "main.h"
/**
 * print_square - prints digits
 *
 * @size : dimention of the square
 *
 * Return: nothing
 */
void print_square(int size)
{
	int j, i;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (j = 0; j < size; j++)
		{
			for (i = 0; i < size; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
