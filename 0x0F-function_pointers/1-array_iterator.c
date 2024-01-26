#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints each array elem on a new line
 * @array: array
 * @size: amount of elem to print
 * @action: pointers to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL \\ action == NULL)
		return;
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}
