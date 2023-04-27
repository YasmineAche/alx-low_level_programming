#include "main.h"
/**
 * _isdigit - check charactor if it's a digit
 *
 * @c: argumment
 *
 * Return: 1 if true or else 0.
 */
int _isdigit(int c)
{
	char digits[] = "0123456789";
	int i;

	for (i = 0; i < 10; i++)
	{
		if (c == digits[i])
		{
			return (1);
		}
	}
	return (0);
}
