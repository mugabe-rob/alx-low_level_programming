#include "main.h"
/**
 * reverse_array - reverse array of integers
 * @a: array
 * @n: number of elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int z;
	int t;

	for (z = 0; z < n--; z++)
	{
		t = a[z];
		a[z] = a[n];
		a[n] = t;
	}
}

