#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *s;
	int a = 0;
	int b = 0;

	if (str == NULL)
	{
		s == NULL;
		return (NULL);
	}

	while (str[a] != '\0')
	{
		a++;
	}
	s = malloc(sizeof(char) * (a + 1));

	for (b = 0; str[b]; b++)
	{
		s[b] = str[b];
	}
	return(s)
}

