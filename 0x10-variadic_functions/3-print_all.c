#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
  * print_all - variadic fonction
  *
  * @format : pointer
  *
  */
void print_all(const char * const format, ...)
{
	va_list arg;
	char *str;
	char Format;
	unsigned int i = 0;

	va_start(arg, format);
	while (format != NULL && format[i])
	{
		Format = format[i];
		if (Format == 'c')
		{
			printf("%c", va_arg(arg, int));
		}
		else if (Format == 'i')
		{
			printf("%d", va_arg(arg, int));
		}
		else if (Format == 'f')
		{
			printf("%f", va_arg(arg, double));
		}
		else if (Format == 's')
		{
			str = va_arg(arg, char *);
			if (str == NULL)
			{
				printf("(nil)");
			}
			else
			{
				printf("%s", str);
			}
		}
		i++;
		if (format[i] != '\0' && (Format == 'c' || Format == 'i' || Format == 'f' || Format == 's'))
		{
			printf(", ");
		}
	}
	va_end(arg);
	printf("\n");
}
