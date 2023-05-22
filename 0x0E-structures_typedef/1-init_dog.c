#include "dog.h"
/**
  * init_dog - fonction
  *
  * @d: variable
  * @name: variable
  * @age: variable
  * @owner: variable
  *
  * return: nothing
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
