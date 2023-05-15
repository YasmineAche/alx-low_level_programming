#include "main.h"
#include <stdlib.h>
/**
  * free_grid - fonction
  *
  * @grid : variable
  * @height : variable
  *
  * Return: Null if alloc's size is 0 or pointer
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
