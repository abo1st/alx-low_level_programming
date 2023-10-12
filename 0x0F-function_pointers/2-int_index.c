#include "function_pointers.h"

/**
  * int_index - This returns index place if comparison = true, else -1
  * @array: array
  * @size: size of elements in array
  * @cmp: pointer to func of one of the 3 in main
  * Return: 0
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int a = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (a < size)
			{
				if (cmp(array[a]))
					return (a);

				a++;
			}
		}
	}

	return (-1);
}
