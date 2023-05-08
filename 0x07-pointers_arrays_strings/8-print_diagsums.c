#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - fonction that fills memory wj\ith a constant byte
 *
 * @a : pointer
 * @size : variable
 *
 * Return: 0
 */
void print_diagsums(int *a, int size)
{
	int i, som1 = 0, som2 = 0;

	for (i = 0; i < size; i++)
	{
		som1 += *(a + i * size + i);
		som2 += *(a + i * size + (size - i - 1));
	}
	printf("%d, %d\n", som1, som2);
}
