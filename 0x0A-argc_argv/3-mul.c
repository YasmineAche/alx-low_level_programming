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
	int mul;

	if (argc > 1)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
