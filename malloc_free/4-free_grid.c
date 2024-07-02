#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2D grid previously allocated by alloc_grid.
 * @grid: Pointer to the 2D grid array.
 * @height: Height of the grid.
 *
 * This function frees the memory allocated for a 2D grid of integers
 * previously allocated by alloc_grid. It takes in the grid pointer and
 * the height of the grid. Each row in the grid is freed individually,
 * followed by freeing the grid itself.
 */

void free_grid(int **grid, int height)
{
	int counter;

	for (counter = 0; counter < height; counter++)
	{
		free(grid[counter]);
	}
	free(grid);
}
