#include "sort.h"

/**
 * selection_sort - Selection sort function
 *  @size: size array
 *  @array: pointer to the array to be sorted
 *  Return: Nothing
 */
void selection_sort(int *array, size_t size)
{
	unsigned int i, j, min, swap;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min])
			{
				min = j;
			}

		}
		if (min != i)
		{
			swap = array[min];
			array[min] = array[i];
			array[i] = swap;
			print_array(array, size);
		}
	}
}
