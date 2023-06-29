#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 * @str: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *str)
{
	int cap_nxt = 1;

	for (int i = 0; str[i] != '\0'; i++)
	{
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
		str[i] == '}')
		{
			cap_nxt = 1;
		}
		else if (cap_nxt)
		{
			str[i] = toupper(str[i]);
			cap_nxt = 0;
		}
	}
	return (str);
}
