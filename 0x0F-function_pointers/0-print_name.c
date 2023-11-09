#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: The name to be printed
 * @f: The printing function to be used
 *
 * Description: This function takes a name and a function pointer to a printing
 * function and uses the provided function to print the name.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
