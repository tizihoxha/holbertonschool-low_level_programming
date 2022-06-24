#include "main.h"
/**
 * alloc_grid - Entry point
 * @width: int width
 * @height: int height
 * Return: NULL, grd
 */
int **alloc_grid(int width, int height)
{
	int **grd;
	int i, j;

	if (width < 1 || height < 1)
		return (NULL);
	grd = malloc(height * sizeof(int *));
	if (grd == NULL)
        {
		free(grd);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grd[i] = malloc(width * sizeof(int));
		if (grd[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(grd[i]);
			free(grd);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			grd[i][j] = 0;
	return (grd);
}
