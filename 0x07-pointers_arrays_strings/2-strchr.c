#include "main.h"
/**
 * _strchr -  function that copies memory area
 * @s: parameter s
 * @c: parameter c
 * *Return: c
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (*s == c)
		return (s);
	return (NULL);
}
