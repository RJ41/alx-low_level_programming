#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Deallocates a 2D grid of integers created by alloc_grid
 * @grid: Pointer to the 2-dimensional
 * @height: grid height
 * Return: void
 */
void free_grid(int **grid, int height)
{
    if (grid == NULL)
        return;

    for (int i = 0; i < height; i++)
    {
        free(grid[i]);
    }

    free(grid);
}
