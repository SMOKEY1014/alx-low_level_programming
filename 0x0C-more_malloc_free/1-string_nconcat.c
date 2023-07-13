#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @src : bytes copied from
 * @dest : bytes copied to
 * @n : Number of bytes.
 * Return: @dest (returns a Pointer)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int r = n;

	for (; i < r; i++)
	{
		dest[i] = src[i];
		n--;
	}
	return (dest);
}

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longi = 0;

	while (*s != '\0')
	{
		longi++;
		s++;
	}

	return (longi);
}

/**
 * *string_nconcat - concatenates n bytes of a string to another string
 * @s1: string to append to
 * @s2: string to concatenate from
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to the resulting string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	if (s1 == NULL || s2 == NULL)
	{
		s1 = " ";
		s2 = " ";
	}

	size_t s1_len = strlen(s1);
	size_t s2_len = strlen(s2);

	if (n >= s2_len)
	{
		n = s2_len;
	}

	char *result = malloc(s1_len + n + 1);

	if (result == NULL)
	{
		return (NULL);
	}
	memcpy(result, s1, s1_len);
	memcpy(result + s1_len, s2, n);
	result[s1_len + n] = '\0';
	return (result);
}
