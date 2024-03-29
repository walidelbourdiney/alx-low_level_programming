#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that searches for an integer
 * @array: an array of integers
 * @size: the size of the array
 * @cmp: pointer to the function to be used to compare values
 * Return: the index of the first element for which the cmp function
 * not return 0
 * if no element matches return -1
 * if size <= 0 return -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (!array || !cmp || size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
		{
			return (i);
		}
	}
	return (-1);
}
	
