#include "sort.h"

/**
 * quick_sort - Function that calls the quick sort algorithmto sort an array
 *
 * @array: Array to sort
 * @size: Size of array to sort
 */
void quick_sort(int *array, size_t size)
{
	quicksort(array, 0, (int)(size - 1), size);
}

/**
 * lomuto_scheme - partitioning scheme for quick sort algorithm.
 *
 * @array: array to partition
 * @first: first index of the sub-array
 * @last: last index of the sub array
 * @size: size of the array
 *
 * Return: The index of the last element swaped
 */
int lomuto_scheme(int *array, int first, int last, size_t size)
{
	int pivot, temp;
	int i = first, j;

	pivot = array[last];
	for (j = first; j < last; j++)
	{
		if (array[j] < pivot)
		{
			if (i == j)
			{
				i++;
				continue;
			}
			temp = array[j];
			array[j] = array[i];
			array[i] = temp;
			print_array(array, size);
			i++;
		}
	}
	if (array[i] > array[last])
	{
		temp = array[i];
		array[i] = array[last];
		array[last] = temp;
		print_array(array, size);
	}
	return (i);
}

/**
 * quicksort - recursive function that segments an array and calls the
 * lomuto scheme to partition and swap the elements in the sub-array
 *
 * @array: array to sort
 * @first: first index of the sub-array
 * @last: last index of the sub array
 * @size: original size of array (only used for printing)
 */
void quicksort(int *array, int first, int last, size_t size)
{
	unsigned int p = 0;

	if (first < last)
	{
		p = lomuto_scheme(array, first, last, size);
		quicksort(array, first, p - 1, size);
		quicksort(array, p + 1, last, size);
	}
}
