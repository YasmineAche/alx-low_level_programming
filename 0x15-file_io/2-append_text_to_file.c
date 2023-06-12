#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
/**
  * append_text_to_file - fonction
  *
  * @filename: pointer
  * @text_content: pointer
  *
  * Return: int
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;
	size_t text_length = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[text_length] != '\0')
		{
			text_length++;
		}
	}
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		bytes_written = write(fd, text_content, text_length);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
