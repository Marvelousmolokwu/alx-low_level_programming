#include "main.h"
/**
  * _strpbrk - searches a string for any of a set of bytes
  * @s: the string to be sreached
  * @accept: the set of bytes to be searched for.
  *
  *Return: if a set is matched - a pointer to the matched byte
  * if no st matched - NULL
  */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
