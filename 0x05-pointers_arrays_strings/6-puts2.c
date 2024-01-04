#include "main.h"

/**
 * puts2 - prints one charcater out of two
 * @str: input
 * Return: print
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_puchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}
