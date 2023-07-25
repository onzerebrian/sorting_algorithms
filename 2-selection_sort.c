#include "sort.h"


/**
 * swap_integers - function that swaps two integers
 * @a: First integer
 * @b: Second integer
 */
void swap_integers(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
/**
 * selection_sort - function
 * @array: array
 * @size: size
 */
void selection_sort(int *array, size_t size)
{

	size_t i, j, index;
	int min;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = array[i];
		index = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < min)
			{
				min = array[j];
				index = j;
			}
		}
		if (index != i)
		{
			swap_integers(array + i, array + index);
			print_array((const int *)array, size);
		}
	}


}
