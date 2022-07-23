#include "sort.h"

/**
 * shell_sort - Shell sort algorithm
 * @array: The array to be sorted
 * @size: The number of elements
 * Return:  Nothing
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap;
	int tmp;

	if (!array || size < 2)
		return;

	gap = 1;
	while (gap < size / 3)
	{
		gap = gap * 3 + 1;
	}

	while (gap > 0)
	{
		for (j = gap; j < size; j++)
		{
			tmp = array[j];
			for (i = j; i >= gap && tmp < array[i - gap]; i -= gap)
				array[i] = array[i - gap];

			array[i] = tmp;
		}
		gap /= 3;
		print_array(array, size);
	}
}
