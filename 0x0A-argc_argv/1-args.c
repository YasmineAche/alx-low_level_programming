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
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
