#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Error)
 */
int main(void)
{
	write(STDOUT_FILENO, "_putchar\n", 9);
	return (0);
}
