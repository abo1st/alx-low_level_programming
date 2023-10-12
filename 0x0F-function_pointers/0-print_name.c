#include "function_pointers.h"

/**
 * print_name - This is a function that prints a name
 * @name: this is the name given
 * @f: This is the function of name
 * Rteurn: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)

		f(name);
}
