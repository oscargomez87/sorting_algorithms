#include "sort.h"

/**
 * selection_sort - Sorts an array of integers in ascending order
 *
 * @array: Array to sort
 * @size: Size of the array
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, minnidx;
	int minnum;

	for (i = 0; i < size; i++)
	{
		minnum = array[i];
		minnidx = 0;
		for (j = i + 1; j < size; j++)
		{
			if (minnum > array[j])
			{
				minnum = array[j];
				minnidx = j;
			}
		}
		if (minnidx != 0)
		{
			array[minnidx] = array[i];
			array[i] = minnum;
			print_array(array, size);
		}
	}
}
