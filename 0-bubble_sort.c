#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: int; array to sort
 * @size: size_t; size of array
 *
 * Return: nothing
 * TheOwl
 */
void bubble_sort(int *array, size_t size)
{
	int *tmp_cur = array, *tmp_stp = array + size - 1, *tmp, n;
	size_t i;

	if (size < 2)
		return;

	while (array != tmp_stp)
	{
		for (i = 0; tmp_cur + i != tmp_stp; i++)
		{
			if (tmp_cur[i] > tmp_cur[i + 1])
			{
				tmp = tmp_cur + i;
				n = tmp_cur[i];
				tmp_cur[i] = tmp_cur[i + 1];
				tmp_cur[i + 1] = n;
				print_array(array, size);
			}
		}
		tmp_stp = tmp;
	}
}
