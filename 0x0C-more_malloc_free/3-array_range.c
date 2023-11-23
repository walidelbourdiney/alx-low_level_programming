#include "main.h"
#include <stdlib.h>

/**
 * array_range - Entry point
 * Description: Creates an array of integers
 * @min: Integer
 * @max: Integer
 * Return: arr
 */

int *array_range(int min, int max)
{
	int *arr, size, i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(size * sizeof(int));

	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}
