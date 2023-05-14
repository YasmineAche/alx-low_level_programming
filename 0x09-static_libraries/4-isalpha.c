#include "main.h"
/**
  * _isalpha - checks for alphabetic character
  *
  * @c: the character to be checked
  *
  * Return: 1 if it is otherwise 0
  */
int _isalpha(int c)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i;

	for (i = 0; i < 52; i++)
	{
		if (c == letters[i])
		{
			return (1);
		}
	}
	return (0);
}
