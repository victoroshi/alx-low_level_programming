#include "main.h"

/**
 * read_textfile - function that reads a text file and
 * prints it to the POSIX standard output
 * @filename: a pointer variable to the file descriptor
 * @letters: number of letterd to be read and print
 * Return: The No of letterd that can be printed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t fd_read, fd_write;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(*buffer) * letters);
	if (!buffer)
		return (0);

	fd_read = read(fd, buffer, letters);
	if (fd_read == -1)
	{
		free(buffer);
		return (0);
	}

	fd_write = write(STDOUT_FILENO, buffer, fd_read);
	if (fd_write == -1 || fd_write != fd_read)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(fd);

	return (fd_write);
}
