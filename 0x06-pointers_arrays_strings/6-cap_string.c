#include "main.h"
/**
  * cap_string - capitalizes
  * @str: string
  * Return: pointer to string
  */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while (!(str[i] >= 'a' && str[i] <= 'z'))

			i++;
		if (str[i - 1] == ' ' ||
				Str[i – 1] == '\t' ||
				Str[i – 1] == '\n' ||
				Str[i – 1] == ',' ||
				Str[i – 1] == ';' ||
				Str[i – 1] == '.' ||
				Str[i – 1] == '!' ||
				Str[i – 1] == '?' ||
				Str[i – 1] == '"' ||
				Str[i – 1] == '(' ||
				Str[i – 1] == ')' ||
				Str[i – 1] == '{' ||
				Str[i – 1] == '}' ||
				i == 0)
			str[i] -= 32;

		i++;
	}

	return (str);
}
