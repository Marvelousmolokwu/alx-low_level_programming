#include "main.h"
/**
  *_strchr - locates a character in a string
  *@s: the string to be sreached
  *@c: the character to be located
  *Return: if c is found - a pinter to the first occurence
  *if c is not found - NULL
  */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}
	return ('\0');
}
