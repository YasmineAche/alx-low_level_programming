#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - main intry point
 *
 * @argc : int variable
 * @argv : pointer to list of strings
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
