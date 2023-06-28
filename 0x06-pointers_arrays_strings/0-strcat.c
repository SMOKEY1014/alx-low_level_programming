#include "main.h"

/**
* char *_strcat - a function that appends the src string to the dest string
* including the overwriting the terminating null byte (\0) at the end of dest, and then adds a terminating null byte.
* *dest_ptr is a pointer.
* @dest: appends to
* @src: Appends from
* Return: pointer to the resulting string
*/

char* _strcat(char* dest, const char* src) {
    char* dest_ptr = dest;
    
    
	while (*dest_ptr != '\0') 
	{
		dest_ptr++;
	}
    
    // Append each character from src to dest
	while (*src != '\0') 
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
    
    // Add the terminating null byte
	*dest_ptr = '\0';
    
	return dest;
}
