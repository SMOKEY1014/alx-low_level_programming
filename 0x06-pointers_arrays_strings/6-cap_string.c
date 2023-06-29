#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int i = 0;

	while (str[i])
	{
		while(!(str[index] >= 'a' && str[index] <= 'z'))
		{
			i++;
		}
		if (isspace(str[i]) ||
		str[i] == ',' ||
		str[i] == ';' ||
		str[i] == '.' ||
		str[i] == '!' ||
		str[i] == '?' ||
		str[i] == '"' ||
		str[i] == '(' ||
		str[i] == ')' ||
		str[i] == '{' ||
		str[i] == '}' ||
		i == 0)
		{
			str[i] -= 32;
		}
		i++
	}
	return (str);
}
