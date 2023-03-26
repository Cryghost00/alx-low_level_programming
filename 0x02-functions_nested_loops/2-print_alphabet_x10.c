#include "main.h"

/**
 * print_alphabet_x10- prints 10 times the alphabet, in lowoercase,
 * followed by a new line
 */

void print_alphabet_x10(void)
{
	int alphabet_count = 0;

	while (alphabet_count < 10)
	{
		ch = 'a';

		while (ch <=  'z')
		{
			_putchar(ch);
			ch++;
		}
		_putchar('\n');
		i++;
	}
}
