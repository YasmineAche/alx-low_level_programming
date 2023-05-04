#include "main.h"
/**
  * reverse_array - prints a string in reverce
  *
  * @a : pointer to the variable
  * @n : pointer to the variable
  *
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int c, i;

	for (i = 0; i < (n / 2); i++)
	{
		c = *(a + i);
		*(a + i) = *(a + n - 1 - i);
		*(a + n - 1 - i) = c;
	}
}
