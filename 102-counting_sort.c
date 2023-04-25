#include "sort.h"
/**
 * counting_sort - a sorting mechanism
 * @array: the array of integers
 * @size: the size of the array
 */
void counting_sort(int *array, size_t size)
{
	unsigned long int i, swapped = 1, temp;

	while (swapped)
	{
		swapped = 0;
		for (i = 1; i < size; i++)
		{
			if (array[i - 1] > array[i])
			{
				temp = array[i - 1];
				array[i - 1] = array[i];
				array[i] = temp;
				print_array(array, size);
				swapped = 1;
			}
		}
	}
}
