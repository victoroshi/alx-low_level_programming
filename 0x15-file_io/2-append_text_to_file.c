#include "main.h"

/**
 * append_text_to_file - function that appends text to the end of a file
 * @filename: the name of the file that text will be appended to
 * @text_content: the string of texts that will be appended
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, lenght;
	ssize_t written, cl;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)     /* if file does not exist */
		return (-1);
	if (text_content == NULL)
	{
		close(fd);
		return (1);    /* file opened, no text to add */
	}

	for (lenght = 0; text_content[lenght]; lenght++) /* strlen(text_content) */
		;

	written = write(fd, text_content, lenght);
	if (written == -1)
		return (-1);
	cl = close(fd);
	if (cl == -1)
		return (-1);

	return (1);
}
