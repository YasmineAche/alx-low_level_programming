#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  * _strlen -calculate the length of a str
  *
  * @s : pointer to the variable
  *
  * Return: len
  */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
/**
  * _strcpy - concatenates two strings
  * @dest : pointer to the variable
  * @src : pointer to the variable
  * Return: char
  */
char *_strcpy(char *dest, char *src)
{
	int len = 0, i;

	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
  * new_dog - fonction
  * @name: variable
  * @age: variable
  * @owner: variablei
  * Return: typedef
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_length, owner_length;
	dog_t *new_dog;

	name_length = _strlen(name);
	owner_length = _strlen(owner);
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		return (NULL);
	}
	new_dog->name = malloc(sizeof(char) * (name_length + 1));
	if (new_dog->name == NULL)
	{
		free(new_dog);
		return (NULL);
	}
	new_dog->owner = malloc(sizeof(char) * (owner_length + 1));
	if (new_dog->owner == NULL)
	{
		free(new_dog);
		free(new_dog->name);
		return (NULL);
	}
	_strcpy(new_dog->name, name);
	_strcpy(new_dog->owner, owner);
	new_dog->age = age;
	return (new_dog);
}

