#include "main.h"
/**
  * print_alphabet_x10 - writes the alphabet 10 times
  *
  * Return nothing
  */
void print_alphabet_x10(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int j;
	int i;

	for (j = 0; j < 10; j++)
	{
		for (i = 0; i < 26; i++)
		{
			_putchar(letters[i]);
		}
		_putchar('\n');
	}
}
