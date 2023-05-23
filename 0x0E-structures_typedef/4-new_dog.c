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
  * _strncpy - concatenates two strings
  * @dest : pointer to the variable
  * @src : pointer to the variable
  * @n : pointer to the variable
  * Return: char
  */
char *_strncpy(char *dest, char *src, int n)
{
	int len_src = 0, i, len_dest = 0;

	while (*src != '\0')
	{
		len_src++;
		src++;
	}
	while (*dest != '\0')
	{
		len_dest++;
		dest++;
	}
	src -= len_src;
	dest -= len_dest;
	for (i = 0; i < n; i++)
	{
		if (dest[i] == '\0')
		{
			break;
		}
		else if (src[i] != '\0' && len_src >= i)
		{
			dest[i] = src[i];
		}
		else
		{
			dest[i] = '\0';
		}
	}
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
	_strncpy(new_dog->name, name, name_length);
	_strncpy(new_dog->owner, owner, owner_length);
	new_dog->age = age;
	return (new_dog);
}

