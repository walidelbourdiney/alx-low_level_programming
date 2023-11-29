#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - function that excutes a function
 * given as a paramter on each element of an array
 * @array: an array
 * @size: size of the array
 * Return: noting
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *max = array + size - 1;

	if (array && size && action)
		while (array <= max)
			action(*array++);
}
