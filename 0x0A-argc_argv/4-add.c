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
	int add = 0, i, j;

	if (argc >= 2)
	{
		for (i = 1; i < argc; i++)
		{
			j = 0;
			while (argv[i][j] != '\0')
			{
				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				}
				j++;
			}
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	else if (argc <= 1)
	{
		printf("0\n");
	}
	return (0);
}
