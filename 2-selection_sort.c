#include "sort.h"
/**
 * selection_sort - type of sorting algorithms
 * @array: unsorted array
 * @size: the size of the array
 */
void selection_sort(int *array, size_t size)
{
	unsigned long int swap, i, j, temp;

	for (j = 0; j < size; j++)
	{
		temp = j;
		for (i = j + 1; i < size; i++)
		{
			if (array[temp] > array[i])
			{
				temp = i;
			}
		}
		if (temp != j)
		{
			swap = array[j];
			array[j] = array[temp];
			array[temp] = swap;
			print_array(array, size);
		}
	}
}
