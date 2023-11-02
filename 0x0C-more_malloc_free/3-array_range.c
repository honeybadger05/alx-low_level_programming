#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - range of arrays
 * @min: min of arrange
 * @max: max of arrays
 * Return: int value
 */
int *array_range(int min, int max)
{
	int i;
	int *f;
	int size;

	if (min > max)
		return (NULL);
	size = 0;
	for (i = min; i <= max; i++)
		size++;

	f = malloc(sizeof(int) * size);
	if (f == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		f[i] = min;
		i++;
		min++;
	}
	return (f);
}
