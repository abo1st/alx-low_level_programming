
#include "search_algos.h"

/**
  * interpolation_search - Searches for a value in a sorted array
  *                        of integers using interpolation search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array..
  */
int interpolation_search(int *array, size_t size, int value)
{
	size_t iz, lz, rz;

	if (array == NULL)
		return (-1);

	for (lz = 0, rz = size - 1; rz >= lz;)
	{
		iz = lz + (((double)(rz - lz) / (array[rz] - array[lz])) * (value - array[lz]));
		if (iz < size)
			printf("Value checked array[%ld] = [%d]\n", iz, array[iz]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", iz);
			break;
		}

		if (array[iz] == value)
			return (iz);
		if (array[iz] > value)
			rz = iz - 1;
		else
			lz = iz + 1;
	}

	return (-1);
}
