#include "sort.h"

/**
 * bubble_sort - Implementing the bubble sort algorithm
 * @array: array of integers to be sorted
 * @size: size of the array to be sorted
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j, temp;
	int swap;

	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
				swap = 1;
			}
			if (swap == 1)
			{
				print_array(array, size);
				swap = 0;
			}
		}
	}
}
