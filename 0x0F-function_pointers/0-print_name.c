#include "function_pointers.h"
/**
  * print_name - fonction
  *
  * @name: variable
  * @f: pointer
  *
  */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
