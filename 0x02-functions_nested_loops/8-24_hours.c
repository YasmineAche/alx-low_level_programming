#include "main.h"
/**
  * jack_bauer - prints every minute of the day of Jack Bauer, from 00:00-23:59
  *
  * Return: 0
  */
void jack_bauer(void)
{
	int h1;
	int h2;
	int m1;
	int m2;
	int flag = 0;

	for (h1 = 0; h1 < 3 && !flag; h1++)
	{
		for (h2 = 0; h2 < 10 && !flag; h2++)
		{
			for (m1 = 0; m1 < 6 && !flag; m1++)
			{
				for (m2 = 0; m2 < 10 && !flag; m2++)
				{
					if (h1 == 2 && h2 == 4 && m1 == 0 && m2 == 0)
					{
						flag = 1;
					}
					else
					{
						_putchar(h1 + '0');
						_putchar(h2 + '0');
						_putchar(':');
						_putchar(m1 + '0');
						_putchar(m2 + '0');
						_putchar('\n');
					}
				}
			}
		}
	}
}
