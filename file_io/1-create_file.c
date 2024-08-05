#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t writeBytes;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		writeBytes = write(fd, text_content, strlen(text_content));
		if (writeBytes == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
