#include "main.h"
/**
 * factorial - faction
 *
 * @n : variable
 *
 * Return: number
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	return (n * factorial(n - 1));
}
