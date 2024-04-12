#include "search_algos.h"

/**
  * _binary_search - This searches for a value in a sorted array
  *                  of integers using binary search.
  * @array: A pointer to the first element of the array to search.
  * @left: The starting index of the [sub]array to search.
  * @right: The ending index of the [sub]array to search.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the index where the value is located.
  *
  * Description: Prints the [sub]array being searched after each change.
  */
int _binary_search(int *array, size_t left, size_t right, int value)
{
	size_t iz;

	if (array == NULL)
		return (-1);

	while (right >= left)
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

/**
  * exponential_search - This searches for a value in a sorted array
  *                      of integers using exponential search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         Otherwise, the index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  */

int exponential_search(int *array, size_t size, int value)
{
	size_t iz = 0, right;

	if (array == NULL)
		return (-1);

	if (array[0] != value)
	{
		for (iz = 1; iz < size && array[iz] <= value; iz = iz * 2)
			printf("Value checked array[%ld] = [%d]\n", iz, array[iz]);
	}

	right = iz < size ? iz : size - 1;
	printf("Value found between indexes [%ld] and [%ld]\n", i / 2, right);
	return (_binary_search(array, i / 2, right, value));
}
