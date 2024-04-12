#include "search_algos.h"

/**
  * binary_search - This searches for a value in a sorted array
  *                 of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the index where the value is located.
  *
  * Description: This prints the [sub]array being searched after each change.
  */

int binary_search(int *array, size_t size, int value)
{
	size_t iz, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (iz = left; iz < right; iz++)
			printf("%d, ", array[iz]);
		printf("%d\n", array[iz]);

		iz = left + (right - left) / 2;
		if (array[iz] == value)
			return (iz);
		if (array[iz] > value)
			right = iz - 1;
		else
			left = iz + 1;
	}

	return (-1);
}
