#include "main.h"
/**
 * _isupper - check charactor if it's apper case
 *
 * @c: argumment
 *
 * Return: 1 if true or else 0.
 */
int _isupper(int c)
{
	char letters[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 26; i++)
	{
		if (c == letters[i])
		{
			return (1);
		}
	}
	return (0);
}
