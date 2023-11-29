#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: name of a person
 * @f: finction pointer
 * Return: noting or void
 */
void print_name(char *name, void (*f)(char *))
{
	if (!name || !f)
	{
		return;
	}
	f(name);
}
