#include "main.h"

/**
* _calloc - This allocates memory using malloc and initialize it to zero
*@nmemb: The number of elements
*@size: The size of the memory block to be allocated
*Return: The poiner to the address of the memory block
*/

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *block;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);
	block = malloc(nmemb * size);
	if (block != NULL)
	{
		for (a = 0; a < (nmemb * size); a++)
			block[a] = 0;
		return (block);
	}
	else
		return (NULL);
}
