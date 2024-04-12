#include "search_algos.h"

/**
  * jump_search - This searches for a value in a sorted array
  *               of integers using jump search.
  * @array: A pointer to the first element of the array to search.
  * @size: The number of elements in the array.
  * @value: The value to search for.
  *
  * Return: If the value is not present or the array is NULL, -1.
  *         else, the first index where the value is located.
  *
  * Description: Prints a value every time it is compared in the array.
  *              Uses the square root of the array size as the jump step.
  */
int jump_search(int *array, size_t size, int value)
{
	size_t iz, jump, step;

	if (array == NULL || size == 0)
		return (-1);

	step = sqrt(size);
	for (iz = jump = 0; jump < size && array[jump] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jump, array[jump]);
		iz = jump;
		jump += step;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", iz, jump);

	jump = jump < size - 1 ? jump : size - 1;
	for (; iz < jump && array[iz] < value; iz++)
		printf("Value checked array[%ld] = [%d]\n", iz, array[iz]);
	printf("Value checked array[%ld] = [%d]\n", iz, array[iz]);

	return (array[iz] == value ? (int)iz : -1);
}
