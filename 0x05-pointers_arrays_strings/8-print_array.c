#include "main.h"
/**
  * print_array - prints half a string
  *
  * @a : pointer to the variable
  *	@n : variable
  *
  * Return : always 0
  */
void print_array(int *a, int n)
{
	int i = 1;

	printf("%d", a[0]);
	while (i < n)
	{
		printf(", %d", a[i]);
		i++;
	}
	printf("\n");
}
