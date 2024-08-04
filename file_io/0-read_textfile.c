#include "main.h"

/**
 * read_textfile - function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: the file that want read and print
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 * if the file can not be opened or read, return 0
 * if filename is NULL return 0
 * if write fails or does not write the expected amount of bytes, return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	if (filename == NULL)
		return (0);

	int fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	char *buff = malloc(letters);
	if (buff == NULL)
	{
		close(fd);
		return (0);
	}

	size_t readBytes = read(fd, buff, letters);
	if (readBytes == -1)
	{
		free(buff);
		close(fd);
		return (0);
	}

	size_t writeBytes = write(fd, buff, letters);
	if (writeBytes == -1)
		return (0);

	close (fd);
	return (readBytes);
}
