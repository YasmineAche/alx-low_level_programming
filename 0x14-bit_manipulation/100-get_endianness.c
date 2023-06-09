#include "main.h"
/**
  * get_endianness - fonction
  *
  * Return: int
  */
int get_endianness(void)
{
	unsigned int num = 1;
	char *c;

	c = (char *)&num;
	return (*c);
}
