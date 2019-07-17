#include <stdlib.h>
#include <stdio.h>
/**
 *freed_grid - free
 *@grid: double int parameter
 *@height: int parameter
 *Description: function free
 *Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
