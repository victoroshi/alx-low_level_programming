#include "main.h"

/**
 * main - Copy file content from one source to another
 * @argc: no if arg
 * @argv: vector arg
 * Return: 0 if when file copy is successful OR 97-100 whenfauled
 */
int main(int argc, char *argv[])
{
	int copy_from, fto, copy_status;
	char buffer[1024];
	ssize_t size;

	if (argc != 3)
		args_error();

	copy_from = open(argv[1], O_RDONLY);
	if (copy_from == -1)
		f_from_error(argv[1]);

	fto = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fto == -1)
		f_to_error(argv[2]);

	while ((size = read(copy_from, buffer, 1024)) > 0)
	{
		if (write(fto, buffer, size) != size)
			f_to_error(argv[2]);
	}

	if (size == -1)
		f_from_error(argv[1]);

	copy_status = close(copy_from);
	if (copy_status == -1)
		copy_error(copy_from);

	copy_status = close(fto);
	if (copy_status == -1)
		c_error(fto);

	return (0);
}

/**
 * args_error - Print error and exit if wrong number of arguments is passed
 */
void args_error(void)
{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
}

/**
 * f_from_error - Print error and exit
 * @file: file name
 */
void f_from_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file);
	exit(98);
}

/**
 * f_to_error - Print error and exit
 * @file: file name
 */
void f_to_error(char *file)
{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
	exit(99);
}

/**
 * c_error - Print error and exit if the close fails
 * @fd: file descriptor
 */
void c_error(int fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
	exit(100);
}
