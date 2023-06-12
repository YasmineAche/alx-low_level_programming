#include "main.h"
/**
  * read_textfile- fonction
  * @filename: pointer
  * @letters: argument
  * Return: ssize_t
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t bytes;
	int fd = open(filename, O_RDONLY);
	char buffer[READ_BUF_SIZE * 8];

	if (!filename || !letters)
	{
		return (0);
	}
	if (fd == -1)
	{
		return (0);
	}
	bytes = read(fd, &buffer[0], letters);
	bytes = write(STDOUT_FILENO, &buffer[0], bytes);
	close(fd);
	return (bytes);
}
