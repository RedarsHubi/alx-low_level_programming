#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
  * alloc_grid - function that returns ptr to 2D array
  * @grid: array to be freed
  * @height: rows
  * Return: 0
  **/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
