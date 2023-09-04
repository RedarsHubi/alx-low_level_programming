#include <string.h>
#include "main.h"
/**
  * create_file - reads text file
  * @filename: file
  * @text_content: content
  * Return: 1 on success, -1 failure
  */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t store;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
	{
		store = write(fd, text_content, strlen(text_content));
		if (store == -1)
		{
			close(fd);
			return (-1);
		}
	}
	close(fd);
	return (1);
}
