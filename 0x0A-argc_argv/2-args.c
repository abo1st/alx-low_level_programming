#include "main.h"
#include <stdio.h>

/**
  * main - This prints all the arguments content
  * @argc: argument count
  * @argv: argument vector
  * Return: Always zero
  */

int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}
