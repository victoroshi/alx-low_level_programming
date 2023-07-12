#include "main.h"

/**
 * create_file - Create the name of the file
 * @filename: name of the filr to be created
 * @text_content: string of characters to br inseretd into the filename
 * Return: Return 1 for success and -1 otherwise
 */
int create_file(const char *filename, char *text_content)
{
	size_t j = 0;
	ssize_t m = 0;
	int fd;

	if (filename == NULL)
		return (-1);
	for (j = 0; text_content && text_content[j]; j++)
		;
	fd = open(filename, O_CREAT | O_TRUNC | O_WRONLY, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (j)
		m = write(fd, text_content, j);
	close(fd);
	if (m == -1)
		return (-1);
	return (1);
}
