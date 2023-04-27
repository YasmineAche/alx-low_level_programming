#include <stdio.h>
/**
  * main - main entry point
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int result, i;

	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			result += i;
		}
	}
	printf("%d\n", result);
	return (0);
}

