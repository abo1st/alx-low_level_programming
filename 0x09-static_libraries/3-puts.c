#include "main.h"

/**
 * _puts - This prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
 */

void _puts(char *str)
{
	int a = 0;

	while (str[a])
	{
		_putchar(str[a]);
		a++;
	}
	_putchar('\n');
}
