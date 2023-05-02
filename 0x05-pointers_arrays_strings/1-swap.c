#include "main.h"
/**
  * swap_int - swaps the value of two integers
  *
  * @a : pointer to the variable
  * @b : pointer to the variable
  *
  * Return : void
  */
void swap_int(int *a, int *b)
{
	int c = *b;

	*b = *a;
	*a = c;
}
