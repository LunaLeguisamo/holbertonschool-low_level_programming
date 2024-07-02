#include "main.h"
#include <stdlib.h>
#include "_strlen.c"

/**
 * alloc_grid - Allocates a 2D array of integers.
 * @width: The width of the grid.
 * @height: The height of the grid.
 *
 * This function dynamically allocates memory for a 2D array of integers
 * with the specified width and height. Returns a pointer to the allocated
 * grid on success, or NULL if memory allocation fails.
 *
 * Return: On success, returns a pointer to the allocated grid. If memory
 * allocation fails or width/height are not positive, returns NULL.
 */

int **alloc_grid(int width, int height)
{
	int counter;
	int counter1;
	int **grid;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (counter = 0; counter < height; counter++)
	{
		grid[counter] = malloc(width * sizeof(int));

		if (grid[counter] == NULL)
		{
			for (counter1 = 0; counter1 < width; counter1++)
			{
				free(grid[counter1]);
			}
			free(grid);
			return (NULL);
		}
	}

	for (counter = 0; counter < height; counter++)
	{
		for (counter1 = 0; counter1 < width; counter1++)
		{
			grid[counter][counter1] = 0;
		}
	}

	return (grid);
}
