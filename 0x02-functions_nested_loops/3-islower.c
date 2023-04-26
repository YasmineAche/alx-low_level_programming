#include "main.h"
/**
  * _islower - checks a character if it's in lower case
  *
  * @c: the character to be checked
  *
  * Return: 1 if it is otherwise 0
  */
int _islower(int c)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
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
