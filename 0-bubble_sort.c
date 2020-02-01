#include "sort.h"

/**
 * bubble_sort - Uses the bubble sort algorithm to sorn an array of size n
 *
 * @array: array to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	unsigned int i, sorted = 0, tsize = size;
	int temp;

	if (tsize > 1)
	{
		while (!sorted)
		{
			sorted = 1;
			for (i = 1; i <= tsize - 1; i++)
			{
				if (array[i - 1] > array[i])
				{
					temp = array[i - 1];
					array[i - 1] = array[i];
					array[i] = temp;
					sorted = 0;
					print_array(array, size);
				}
			}
			tsize -= 1;
		}
	}
}
