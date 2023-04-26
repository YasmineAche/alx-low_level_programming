#include "main.h"
/**
  * _islower - checks a character if it's in lower case
  *
  * Return 1 if it is
  * Return 0 if it's not
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
		else
		{
			return (0);
		}
	}
}
