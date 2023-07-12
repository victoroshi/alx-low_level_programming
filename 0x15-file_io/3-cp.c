#include "main.h"

/**
 * file1fail - Print error message if can't read file
 * @file: Name of the file that can't be read
 */
void file1fail(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * file2fail - Print error message if can't write to file
 * @file: Name of the file that can't be write to
 */
void file2fail(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * closefail - Print error message if file can't close
 * @fd: File descriptor of the file
 */
void closefail(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}

/**
  * main - copy the content of one file
  * @argc: Number of args
  * @argv: Array of args
  * Return: 0 on success
  */
int main(int argc, char *argv[])
{
	int file1, file2, file1read, file2write, closed;
	char buffer[BUFSIZE];
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	if (argv[1] == NULL)
		file1fail(argv[1]);
	if (argv[2] == NULL)
		file2fail(argv[2]);
	file1 = open(argv[1], O_RDONLY);
	if (file1 == -1)
		file1fail(argv[1]);
	file2 = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	if (file2 == -1)
		file2fail(argv[2]);
	file1read = read(file1, buffer, BUFSIZE);
	if (file1read == -1)
		file1fail(argv[1]);
	while (file1read > 0)
	{
		file2write = write(file2, buffer, file1read);
		if (file2write != file1read)
			file2fail(argv[2]);
		file1read = read(file1, buffer, BUFSIZE);
		if (file1read == -1)
			file1fail(argv[1]);
	}
	closed = close(file1);
	if (closed == -1)
		closefail(file1);
	closed = close(file2);
	if (closed == -1)
		closefail(file2);
	return (0);
}
