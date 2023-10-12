#include "function_pointers.h"

/**
 * array_iterator - This is a function given as a
 * parameter on each element of an array
 * @array: array to execute func on
 * @size: This is the size of the array
 * @action: This is a pointer to the function you need to use
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && action)
	{
		a = 0;
		while (a < size)
		{
			action(array[a]);
			a++;
		}
	}
}
