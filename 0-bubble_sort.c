#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * bubble_sort - Sorts an array of integers using Bubble Sort  n
 * @array: Pointer to the array
 * @size: Number of elements in the array
 * Prints the array after each swap
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int temp, swap;

	if (array == NULL || size < 2)
		return;
	for (i = 0; i < size - 1; i++)
	{
		swap = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				print_array(array, size);
				swap = 1;
			}
		}
		if (swap == 0)
			break;
	}
}
