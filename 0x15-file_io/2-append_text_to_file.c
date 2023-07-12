#include "main.h"
/**
 * append_text_to_file - append string of characters to end of a file
 * @filename: filename to be appended into
 * @text_content: this is the content that will be appended to the filename
 * Return: 1 on success, -1 if `write' or `open' fails
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, file_size;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	for (file_size = 0; text_content && text_content[file_size]; file_size++);
	if (write(fd, text_content, file_size) != file_size)
	{
		close(fd);
		return (-1);
	}
	close(fd);
	return (1);
}
