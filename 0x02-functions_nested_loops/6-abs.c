#include "main.h"
/**
  * _abs - writes the absulut value of a number
  *
  * @n : argument variable
  *
  * Return: abs(n)
  */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * (-1));
	}
	else
	{
		return (n);
	}
}
