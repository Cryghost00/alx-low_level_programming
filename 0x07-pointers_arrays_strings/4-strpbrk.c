#include "main.h"

/**
 * _strbrk - function that searches a string for any of a set of bytes.
 * @s: parameter 1
 * @accept: parameter 2
 * Return: always o
 */

char *_strbrk(char *s, char *accept)
{
	while (*s != '\0')
	{
		const char *a = accept;

		while (*a != '\0')
		{

			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
