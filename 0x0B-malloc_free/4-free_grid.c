#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free grid memorr
 * @grid: pointer to array
 * @height: dimension array elements
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
