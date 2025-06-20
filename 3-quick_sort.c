#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * quick_sort - Sorts an array using Quick sort algorithm
 * @array: Pointer to the array
 * @size: Size of the array
 *
 * Return: Nothing
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quick_sort_recursive(array, 0, size - 1, size);

}

/**
 * quick_sort_recursive - Recursively sorts sub-arrays
 * @array: Pointer to the array
 * @low: Starting index
 * @high: Ending index
 * @size: Total size of the array (for printing)
 *
 * Return: Nothing
 */

void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	if (low < high)
	{
		int pi = partition(array, low, high, size);

		quick_sort_recursive(array, low, pi - 1, size);
		quick_sort_recursive(array, pi + 1, high, size);
	}
}


/**
 * partition - Partitions the array using Lomuto scheme
 * @array: Pointer to the array
 * @low: Starting index of the partition
 * @high: Ending index of the partition
 * @size: Size of the array (for printing)
 *
 * Return: Index of the pivot after partition
 */

int partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int i = low - 1;
	int temp;

	for (int j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			i++;
			temp = array[i];
			array[i] = array[j];
			array[j] = temp;

			if (i != j)
				print_array(array, size);
		}
	}

	temp = array[i + 1];
	array[i + 1] = array[high];
	array[high] = temp;

	if ((i + 1) != high)
		print_array(array, size);

	return (i + 1);
}
