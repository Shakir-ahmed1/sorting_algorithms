#include "sort.h"
#include <stdio.h>
/**
 * quick_sort - divide and conqeur sorting algorithm
 * @array: unsorted array of integers
 * @size: the size of the array
 */
long int partition(int *array, long int size, long int low, long int high)
{
	long int pivot, i, j, temp;

	pivot = array[high];
	i = low;
	for (j = low; j < high; j++)
	{
		if (array[j] < pivot)
		{
			if (j != i)
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
				print_array(array,size);
			}
			i++;
		}
	}
	if (i != high && array[i] != array[high])
	{
		temp = array[i];
		array[i] = array[high];
		array[high] = temp;
		print_array(array, size);
	}
	return i;

}
void quick(int *array, long int size, long int low, long int high)
{
	long int p;

	if (low >= high || low < 0)
		return;
	p = partition(array, size, low, high);
	quick(array, size, low, p - 1);
	quick(array, size, p + 1, high);
}
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;
	quick(array, size, 0, size -1);
}
