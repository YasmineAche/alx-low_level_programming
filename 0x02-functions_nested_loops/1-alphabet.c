#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
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
