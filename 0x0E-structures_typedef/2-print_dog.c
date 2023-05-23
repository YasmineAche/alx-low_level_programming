#include "dog.h"
#include <stdio.h>
/**
  * print_dog - fonction
  *
  * @d : pointer
  *
  * Return: nothing
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	else
	{
		if (d->name == NULL)
		{
			printf("Name: (nil)\n");
		}
		printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == NULL)
		{
			printf("Owner: (nil)\n");
		}
		printf("Owner: %s\n", d->owner);
	}
}
