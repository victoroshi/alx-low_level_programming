#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all arguments
 * @ac: integer number of array
 * @av: array of strings of characters
 *
 * Return: pointer to the new string or 0 if otherwise
 */
char *argstostr(int ac, char **av)
{
	int i, j, k = 0, len = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
		for (j = 0; av[i][j]; j++)
			len++;

	str = malloc((ac + len + 1) * sizeof(char));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k++] = '\n';
	}
	str[k] = '\0';
	return (str);
}
