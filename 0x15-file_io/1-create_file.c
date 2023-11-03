#include "main.h"

/**
 * create_file - function that creates new file if it does not exist
 * @filename: the name of the file that will be created
 * @text_content: the string of texts to be written to teh file
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, lenght;
	ssize_t written, cl;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)     /* if file does not exist */
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);    /* file created, no text to add */
	}
/* count text_content length */
	for (lenght = 0; text_content[lenght]; lenght++)
		;

	written = write(fd, text_content, lenght);
	if (written == -1)
		return (-1);
	cl = close(fd);
	if (cl == -1)
		return (-1);

	return (1);
}
