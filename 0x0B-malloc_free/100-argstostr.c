#include <stdlib.h>
#include "main.h"
/**
  * argstostr - concatenates all the arguments of my program
  * @ac: arguments countenate
  * @av: pointer to args array
  *
  * Return: pointer to concating arguments
  */
char *argstostr(int ac, char **av)
{
	char *size, *str;
	int i, j, size_allocation;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, size_allocation = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, size_allocation++)
			;
		size_allocation++;
	}

	size_allocation++;

	size = malloc(size_allocation * sizeof(char));

	if (size == NULL)
		return (NULL);

	str = size;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*size = av[i][j];
			size++;
		}

		*size = '\n';
		size++;
	}

	return (str);
}
