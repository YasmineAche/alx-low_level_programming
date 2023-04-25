#include "main.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Error)
 */
int main(void)
{
	char word[] = "_putchar";
	for (int i = 0; i < 8; i++)
	{
		_putchar(word[i]);
	}
	_putchar('\n');
	return (0);
}
