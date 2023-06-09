#include "main.h"

/**
  * cap_string - capitalize all words of string
  * @str: pointer to source string
  *
  * Return: (str)
  */
char *cap_string(char *str)
{
	int i, j;
	char strArr[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	i = 0;

	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (i == 0)
				str[i] -= 32;

			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (strArr[j] == str[i - 1])
						str[i] -= 32;
				}
			}
		}

		i++;
	}

	return (str);
}
