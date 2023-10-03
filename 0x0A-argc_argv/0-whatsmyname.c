#include "main.h"
#include <stdio.h>

/**
 * main - This prints the name, followed by a new line.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 - success.
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
