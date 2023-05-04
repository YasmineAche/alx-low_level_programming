#include "main.h"
/**
  * _strcmp - compares two strings
  *
  * @s1 : pointer to the variable
  * @s2 : pointer to the variable
  *
  * Return: int
  */
int _strcmp(char *s1, char *s2)
{
	int len_s1 = 0, i = 0, len_s2 = 0;

	while (*s1 != '\0')
	{
		len_s1++;
		s1++;
	}
	while (*s2 != '\0')
	{
		len_s2++;
		s2++;
	}
	s1 -= len_s1;
	s2 -= len_s2;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i] && len_s1 > len_s2)
		{
			return (15);
		}
		else if (s1[i] != s2[i] && len_s1 < len_s2)
		{
			return (-15);
		}
		else if (s1[i] == s2[i] && *s1 == *s2)
		{
			break;
		}
		i++;
	}
	return (0);
}
