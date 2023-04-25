#include <unistd.h>
#include "main.h"
/**
  * print_alphabet - writes the alphabet
  *
  * Return nothing
  */
void print_alphabet(void)
{
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	for (i = 0; i < 26; i++)
	{
		_putchar(letters[i]);
	}
	_putchar('\n');
}
/**
 * main - Entry point
 *
 * Return: Always 0 (Error)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
