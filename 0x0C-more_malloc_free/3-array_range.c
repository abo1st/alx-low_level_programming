#include "main.h"

/**
* array_range - This creates an array of integers
* @min: The smallest number in the array
* @max: The largest value in the array
* Return: This points to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *block;
	int a, b = 0;

	if (min > max)
		return (NULL);
	block = malloc(sizeof(*block) * ((max - min) + 1));
	if (block != NULL)
	{
		for (a = min; a <= max; a++)
		{
			block[b] = a;
			b++;
		}
		return (block);
	}
	else
		return (NULL);

}
