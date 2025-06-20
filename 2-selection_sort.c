#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * selection_sort - Sorts an array using the Selection sort algorithm
 * @array: Pointer to the array to sort
 * @size: Number of elements in the array
 *
 * Return: Nothing
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j,swap;
	int temp;

	if (array == NULL || size < 2)
	{
		return;
	}

	for (i = 0; i < size - 1; i++)
	{
		swap = i;
		for (j = i + 1; j < size;j++)
		{
			if (array[j] < array[swap])
				swap = j;
		}
		if (swap != i)
		{
			temp = array[i];
			array[i] = array[swap];
			array[swap] = temp;
			print_array(array, size);
		}
	}

}
