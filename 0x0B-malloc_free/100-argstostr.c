#include "main.h"
#include <stdlib.h>

/**
 * argstostr - concatenates al, tge argument of a programm.
 * @ac: argument counts.
 * @av: argument vector.
 *
 * Return pointer of and array of char
 */
char *argstostr(int ac, char **av)
{
	char *aout;
	int c, i, j, ia;

	if (ac == 0)
	{
		return (NULL);
	}
	for (c = i = 0; i <= ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);
		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}
	aout = malloc((c + 1) * sizeof(char));
	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}
	for (i = 0, j = 0; i < c; i++, j++)
	{
		if (av[i][j] == '\0')
		{
			aout[ia] = '\n';
			i++;
			ia++;
			j = 0;
		}
		if (ia < c - 1)
			aout[ia] = av[i][j];
	}
	aout[ia] = '\0';
	return (aout);
}
