#include "variadic_functions.h"
#include <stdarg.h>
/**
  * sum_them_all - variadic fonction
  *
  * @n :variable
  *
  * Return: int
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list size;
	unsigned int sum = 0, i;

	if (n == 0)
	{
		return (0);
	}
	va_start(size, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(size, int);
	}
	va_end(size);
	return (sum);
}
