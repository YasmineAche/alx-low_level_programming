#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter;
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar('0' + n);
	}
	for (letter = 'a'; letter <= 'f'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
