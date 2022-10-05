#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - a grid that returns a pointer to a 2 dimensional array of integers
 * @width
 * @height
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height);
{
	int i, j, k, l;
	int **a;

	if (width <= 0 || height <= 0)
		return (NULL);

	a = malloc(sizeof(int *) * height);

	if (a == NULL)
	{
		free(a);
		return (NULL);
	}	
