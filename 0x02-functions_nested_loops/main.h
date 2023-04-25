/**
  3  * _putchar - writes the character c to stdout
  4  * @c: The character to print
  5  *
  6  * Return: On success 1.
  7  * On error, -1 is returned, and errno is set appropriately.
  8  */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
