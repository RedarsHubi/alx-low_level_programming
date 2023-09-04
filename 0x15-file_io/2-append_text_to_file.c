#include <string.h>
#include "main.h"
/**
  * append_text_to_file - appends text to file
  * @filename: file
  * @text_content: content
  * Return: 1 on success, -1 failure
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t store;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_APPEND, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	store = write(fd, text_content, strlen(text_content));
	if (store == -1)
		return (-1);

	close(fd);
	return (1);
}
